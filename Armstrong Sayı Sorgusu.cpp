#include <stdio.h>
#include <math.h>
 
main()
{
    int sayi;
    int gecici1,gecici2;
    int basamak = 0;
    int toplam = 0;
    int deger;
    int us;
    
    printf("Sayi giriniz: ");
    scanf("%d",&sayi);
    gecici1 = sayi;
    gecici2 = sayi;
    
    while(gecici1 > 0){  
        gecici1 = gecici1 / 10;
        basamak++;  
    }
    
    while(sayi > 0){
        deger = sayi % 10;
        us = pow(deger,basamak);
        toplam  += us;
        sayi = sayi / 10;
    }
    if(toplam == gecici2){
        printf("%d Sayisi armstrong bir sayidir.",gecici2);
    }
    else{
        printf("%d Sayisi armstrong bir sayi degildir.",gecici2);
    }   
    return 0;
}
