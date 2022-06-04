#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    // goto menu; ile menuye geri dön
    int secim;
    float sayi1,sayi2;

    menu: printf("Yapmak istediginiz islemi seciniz..\n");
    printf("1.Toplama\n2.Cikarma\n3.Carpma\n4.Bolme\n5.Karekok\n6.Kuvvet\n");
    printf("Cikmak Icin -1 Tuslayiniz..\n");
    scanf("%d",&secim);

    if (secim<1 && secim>6){
        printf("Lutfen 1 ila 6 arasi secim yapiniz..\n");
        return 0;
    }

    else if (secim==-1) {
        goto cikis;
    }

    printf("2 sayi giriniz..\n");
    scanf("%f%f",&sayi1,&sayi2);

    switch (secim)
    {
        case 1: printf("Toplam: %.2f\n",sayi1+sayi2);break;
        case 2: printf("Cikarma: %.2f\n",sayi1-sayi2);break;
        case 3: printf("Bolme: %.2f\n",sayi1/sayi2);break;
        case 4: printf("Carpma: %.2f\n",sayi1*sayi2);break;
        case 5: printf("Karekok: %.1f=%.1f \nKarekok %.1f=%.1f\n",sayi1,sqrt(sayi1),sayi2,sqrt(sayi2));break;
        case 6: printf("Kuvvet: %.1f uzeri %.1f = %.1f\n",sayi1,sayi2,pow(sayi1,sayi2));break;
    }
    
    goto menu;
    cikis:
    return 0;
}
