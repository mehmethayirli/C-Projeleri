#include <stdio.h>
 
int main()
{
    float boy;
    int kilo;
    int sonuc;
    
    printf("Boyunuzu giriniz (1.75): ");
    scanf("%f",&boy);
    printf("Kilonuzu giriniz: ");
    scanf("%d",&kilo);
    
    sonuc = kilo / (boy * boy);
    printf("Beden Kitle indeksi = %d\n",sonuc);
    
    if(sonuc < 18){
        printf("Zayif");
    }
    else if(sonuc < 25){
        printf("Normal");
    }
    else if(sonuc < 30){
        printf("Hafif sisman");
    }
    else if(sonuc < 35){
        printf("Sisman");
    }
    else{
        printf("Obez");
    }
	return 0;
}
