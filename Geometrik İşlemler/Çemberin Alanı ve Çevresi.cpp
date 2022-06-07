#include <stdio.h>
#include <stdlib.h>

int main()
{
    float pi = 3.14;
    float CemberinYariCapi;
    //#define pi 3.14

    printf("Cemberin yaricapini giriniz \n");

    scanf("%f",&CemberinYariCapi);
    printf("Cemberin Alani: %.2f\n",pi*CemberinYariCapi);
    printf("Cemberin Cevresi: %.1f\n",2*pi*CemberinYariCapi);

    return 0;
}
