#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Turkish");
    
    int KareninBirKenari;

    printf("Karenin bir kenarini girin\n");
    scanf("%d",&KareninBirKenari);

    printf("Karenin alani: %d \n", KareninBirKenari*KareninBirKenari);
    printf("Karenin çevresi: %d \n", KareninBirKenari*4);
    printf("Karenin kosegen uzunlugu: Kok %d \n", KareninBirKenari);

    return 0;
}
