#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sayi=0; //veya sayi=0 farketmez
    int x=1;

    printf("Kaca kadar yazdirmak istiyorsunuz?\n");
    scanf("%d",&sayi);

    while (sayi>0){
        printf("%d\n",x); //printf("%d\n",x); 5ten 1e
        x++; //x++;
        sayi--;
    }
    return 0;
}
