#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
    char *takimlar[]={"Gs","Fb","Bjk"};

   // printf("%s",*takimlar); //sadece birinciyi yazar
    for(int i=0;takimlar[i]!='\0';i++)
        printf("%s\n",*(takimlar+i));  */

     char ulkeler[4][20];

     for(int i=0;i<4;i++){
        printf("%d. ulkeyi giriniz..\n",i+1);
        scanf("%s",ulkeler[i]);
     }

     for(int i=0;i<4;i++)
        printf("%s ",ulkeler[i]);

    printf("\n");

    char *ulkeAdres[4];

    for(int i=0;i<4;i++)
        ulkeAdres[i]=&ulkeler[i];

    for(int i=0;i<4;i++)
        printf("%s",*(ulkeAdres));

    return 0;
}
