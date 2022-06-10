#include <stdio.h>
#include <stdlib.h>

float topla(float *x,float *y){
        return *x+*y;
}
float cikar(float *x,float *y){
        return *x-*y;
}
float carp(float *x,float *y){
        return *x**y;
}
float bol(float *x,float *y){
        return *x/ *y;
}

int main()
{
    int secim;
    float x,y;

    printf("1.Toplama\n");
    printf("2.Cikarma\n");
    printf("3.Carpma\n");
    printf("4.Bolme\n");

    printf("Islemi seciniz..\n");
    scanf("%d",&secim);
    //islem(secim);

    printf("Iki sayi giriniz\n");
    scanf("%f %f",&x,&y);

    switch(secim){
        case 1:printf("%.2f",topla(&x,&y));break;
        case 2:printf("%.2f",cikar(&x,&y));break;
        case 3:printf("%.2f",carp(&x,&y));break;
        case 4:printf("%.2f",bol(&x,&y));break;
    }
    return 0;
}
