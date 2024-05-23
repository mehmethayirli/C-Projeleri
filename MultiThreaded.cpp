#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <pthread.h>

typedef struct {
    int *agirliklar;
    int *kapasiteler;
    int *atama;
    int *mevcutYuk;
    int baslangic;
    int son;
    int k;
} isParcacıgıVerisi;

void rastgeleagirliklarOlustur(int agirliklar[], int n, int maxAgirlik);
void rastgeleKapasitelerOlustur(int kapasiteler[], int k, int toplamAgirlik);
void* ilkUygunYerlestirmeİsParcacigi(void *arg); //pointer

int main() {
    //n=kitap sayisi, k=kutu sayisi
    int n, k;

    printf("Kitap sayısını giriniz: ");
    scanf("%d", &n);
    if (n <= 0) {
          printf("Geçerli bir kitap sayısı giriniz.\n");
        return 0;
      }

    printf("Kutu sayısını giriniz: ");
    scanf("%d", &k);
    if (k <= 0) {
          printf("Geçerli bir kutu sayısı giriniz.\n");
          return 0;
      }
    
    if(n>1 && k<2){
        printf("Bir kutu tüm kitapları taşıyamaz.\n");
        return 0;
    }
    
    
    srand(time(NULL));
    int agirliklar[n];
    int kapasiteler[k];
    int atama[n];
    int mevcutYuk[k];
    int maxAgirlik = 1000;  // Maksimum kitap ağırlığı (gram cinsinden)
    int kullanilanKutular = 0;
    int bosaGidenAlan = 0;

    // Kitap agirliklarını rastgele oluşturma
    rastgeleagirliklarOlustur(agirliklar, n, maxAgirlik);

    // Toplam kitap ağırlığını hesapla
    int toplamAgirlik = 0;
    for(int i = 0; i < n; i++) {
        toplamAgirlik += agirliklar[i];
    }

    // Kutu kapasitelerini rastgele oluşturma
    rastgeleKapasitelerOlustur(kapasiteler, k, toplamAgirlik);

    // Kitap agirlikları ve kutu kapasitelerini yazdır
    printf("Kitap agirlikları (gr):\n");
    for(int i = 0; i < n; i++) {
        printf("%d ", agirliklar[i]);
    }
    printf("\n");

    printf("Kutu kapasiteleri (kg):\n");
    for(int i = 0; i < k; i++) {
        printf("%d ", kapasiteler[i] / 1000);
    }
    printf("\n");

    // Çoklu iş parçacıklı yerleştirme
    pthread_t isParcaciklari[2];
    isParcacıgıVerisi isParcacigiVerisi[2];
    int parcaBuyuklugu = n / 2;

    // İlk iş parçacığı
    isParcacigiVerisi[0].agirliklar = agirliklar;
    isParcacigiVerisi[0].kapasiteler = kapasiteler;
    isParcacigiVerisi[0].atama = atama;
    isParcacigiVerisi[0].mevcutYuk = mevcutYuk;
    isParcacigiVerisi[0].baslangic = 0;
    isParcacigiVerisi[0].son = parcaBuyuklugu;
    isParcacigiVerisi[0].k = k;

    // İkinci iş parçacığı
    isParcacigiVerisi[1].agirliklar = agirliklar;
    isParcacigiVerisi[1].kapasiteler = kapasiteler;
    isParcacigiVerisi[1].atama = atama;
    isParcacigiVerisi[1].mevcutYuk = mevcutYuk;
    isParcacigiVerisi[1].baslangic = parcaBuyuklugu;
    isParcacigiVerisi[1].son = n;
    isParcacigiVerisi[1].k = k;

    struct timespec baslangic, bitis;
    clock_gettime(CLOCK_MONOTONIC, &baslangic);

    pthread_create(&isParcaciklari[0], NULL, ilkUygunYerlestirmeİsParcacigi, (void*)&isParcacigiVerisi[0]);
    pthread_create(&isParcaciklari[1], NULL, ilkUygunYerlestirmeİsParcacigi, (void*)&isParcacigiVerisi[1]);

    pthread_join(isParcaciklari[0], NULL);
    pthread_join(isParcaciklari[1], NULL);
    clock_gettime(CLOCK_MONOTONIC, &bitis);

    double gecen_sure = (bitis.tv_sec - baslangic.tv_sec) + (bitis.tv_nsec - baslangic.tv_nsec) / 1e9;

    // Kullanılan kutu sayısını ve boşa giden depolama kapasitesini hesaplama
    for (int i = 0; i < k; i++) {
        if (mevcutYuk[i] > 0) {
            kullanilanKutular++;
            bosaGidenAlan += (kapasiteler[i] - mevcutYuk[i]);
        }
    }

    printf("Kitapların kutulara yerleştirildi:\n");
    for (int i = 0; i < n; i++) {
        printf("Kitap %d -> Kutu %d\n", i + 1, atama[i] + 1);
    }
    printf("Kullanılan kutu sayısı: %d\n", kullanilanKutular);
    printf("Boşa giden depolama kapasitesi (gr): %d\n", bosaGidenAlan);

    // Verimlilik hesaplaması
    double verimlilik = (double)bosaGidenAlan * ((double)kullanilanKutular / k);
    printf("Algoritmanın verimliliği: %.2f\n", verimlilik);
    printf("Multi Thread süresi: %.9f saniye\n", gecen_sure);

    return 0;
}

void rastgeleagirliklarOlustur(int agirliklar[], int n, int maxAgirlik) {
    for(int i = 0; i < n; i++) {
        agirliklar[i] = (rand() % maxAgirlik) + 1; // 1 ile maxAgirlik arasında rastgele ağırlık
    }
}


void rastgeleKapasitelerOlustur(int kapasiteler[], int k, int toplamAgirlik) {
    for(int i = 0; i < k; i++) {
        kapasiteler[i] = ((rand() % toplamAgirlik) + 1) * 2;
        kapasiteler[i] = (kapasiteler[i] < toplamAgirlik) ? kapasiteler[i] : toplamAgirlik;
    }
}

void* ilkUygunYerlestirmeİsParcacigi(void *arg) {
    isParcacıgıVerisi *veri = (isParcacıgıVerisi*)arg;
    int *agirliklar = veri->agirliklar;
    int *kapasiteler = veri->kapasiteler;
    int *atama = veri->atama;
    int *mevcutYuk = veri->mevcutYuk;
    int baslangic = veri->baslangic;
    int son = veri->son;
    int k = veri->k;

    for (int i = baslangic; i < son; i++) {
        for (int j = 0; j < k; j++) {
            if (mevcutYuk[j] + agirliklar[i] <= kapasiteler[j]) {
                mevcutYuk[j] += agirliklar[i];
                atama[i] = j;
                break;
            }
        }
    }

    pthread_exit(NULL);
}
