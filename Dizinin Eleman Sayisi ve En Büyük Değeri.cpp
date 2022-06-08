#include <stdio.h>
#include <stdlib.h>

void enBuyuksayi(int dizi[],int boyut){

    int enBuyukDeger=0;

    for(int i=0;i<boyut;i++){
        if(dizi[i]>enBuyukDeger)
            enBuyukDeger = dizi[i];
    }
    printf("En buyuk deger = %d\n",enBuyukDeger);
}

int main()
{
    int dizi[]={2,3,4,5,6,7};
    enBuyuksayi(dizi,6);
    int boyut = sizeof(dizi)/sizeof(dizi[0]);
    printf("Dizideki eleman sayisi = %d\n",boyut);

    return 0;
}
