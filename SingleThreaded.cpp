#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void rasgeleAgirlikUret(int agirliklar[], int n, int maxAgirlik);
void rasgeleKapasiteUret(int kapasiteler[], int k, int toplamAgirlik);
int ilkUygunYerleştirme(int agirliklar[], int n, int kapasiteler[], int k, int atanmalar[], int mevcutYukler[], int *kullanilanKutular, int *bosaGidenAlan);

int main() {
    int n, k;
    srand(time(NULL));

    printf("Kitap sayısını giriniz: ");
    scanf("%d", &n);
    printf("Kutu sayısını giriniz: ");
    scanf("%d", &k);
     
    int agirliklar[n];
    int kapasiteler[k];
    int atanmalar[n];
    int mevcutYukler[k];
    int maxAgirlik = 1000;  // maximum kitap ağırlığı (gram cinsinden)
    int kullanilanKutular = 0;
    int bosaGidenAlan = 0;

    // Kitap agirliklarını rastgele oluşturma
    rasgeleAgirlikUret(agirliklar, n, maxAgirlik);

    // Toplam kitap ağırlığını hesapla
    int toplamAgirlik = 0;
    for(int i = 0; i < n; i++) {
        toplamAgirlik += agirliklar[i];
    }

    // Kutu kapasitelerini rastgele oluşturma
    rasgeleKapasiteUret(kapasiteler, k, toplamAgirlik);

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
    
//---
    
    // Kitapları kutulara yerleştirmeye çalış
    struct timespec baslangic, bitis;
    clock_gettime(CLOCK_MONOTONIC, &baslangic);
    if (ilkUygunYerleştirme(agirliklar, n, kapasiteler, k, atanmalar, mevcutYukler, &kullanilanKutular, &bosaGidenAlan)) {
        clock_gettime(CLOCK_MONOTONIC, &bitis);
        double gecenZaman = (bitis.tv_sec - baslangic.tv_sec) + (bitis.tv_nsec - baslangic.tv_nsec) / 1e9;

        printf("Kitapların kutulara yerlestirildi.\n");
        for (int i = 0; i < n; i++) {
            printf("Kitap %d -> Kutu %d\n", i + 1, atanmalar[i] + 1);
        }
        printf("Kullanılan kutu sayısı: %d\n", kullanilanKutular);
        printf("Boşa giden depolama kapasitesi (gr): %d\n", bosaGidenAlan);

        // Verimlilik hesaplaması
        double verimlilik = (double)bosaGidenAlan * ((double)kullanilanKutular / k);
        printf("Algoritmanın verimliliği: %.2f\n", verimlilik);
        printf("Single thread süresi: %.9f saniye\n", gecenZaman);
    } else {
        printf("Kitapları kutulara sığdırılamaz.\n");
    }

    return 0;
}

void rasgeleAgirlikUret(int agirliklar[], int n, int maxAgirlik) {
    for(int i = 0; i < n; i++) {
        agirliklar[i] = (rand() % maxAgirlik) + 1; // 1 ile maxAgirlik arasında rastgele ağırlık
    }
}

void rasgeleKapasiteUret(int kapasiteler[], int k, int toplamAgirlik) {
    for(int i = 0; i < k; i++) {
        kapasiteler[i] = ((rand() % toplamAgirlik) + 1) * 2;
        kapasiteler[i] = (kapasiteler[i] < toplamAgirlik) ? kapasiteler[i] : toplamAgirlik;
    }
}

int ilkUygunYerleştirme(int agirliklar[], int n, int kapasiteler[], int k, int atanmalar[], int mevcutYukler[], int *kullanilanKutular, int *bosaGidenAlan) {
    for (int i = 0; i < k; i++) {
        mevcutYukler[i] = 0;
    }

    *kullanilanKutular = 0;

    for (int i = 0; i < n; i++) {
        int yerlestirildi = 0;
        for (int j = 0; j < k; j++) {
            if (mevcutYukler[j] + agirliklar[i] <= kapasiteler[j]) {
                mevcutYukler[j] += agirliklar[i];
                atanmalar[i] = j;
                yerlestirildi = 1;
                break;
            }
        }
        if (!yerlestirildi) {
            return 0;
        }
    }

    // Kullanılan kutu sayısını ve boşa giden depolama kapasitesini hesaplama
    for (int i = 0; i < k; i++) {
        if (mevcutYukler[i] > 0) {
            (*kullanilanKutular)++;
            *bosaGidenAlan += (kapasiteler[i] - mevcutYukler[i]);
        }
    }

    return 1;
}