#include <stdio.h>
#include <stdlib.h>

int main()
{
    int Duk,Dkk;

    printf("Dikdortgenin Uzun Kenarini Girin \n");
    scanf("%d",&Duk);
    printf("Dikd�rtgenin Kisa Kenarini Girin \n");
    scanf("%d",&Dkk);

    printf("Dikdortgenin Alani: %d\n",Duk*Dkk);
    printf("Dikdortgenin Cevresi: %d\n",(Duk+Dkk)*2);
    printf("Dikdortgenin Koesegen Uzunlug�: Kok %d\n",(Duk*Duk)+(Dkk*Dkk));
    
    return 0;
}
