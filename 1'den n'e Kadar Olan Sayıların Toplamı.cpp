#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sayi=0;
    int toplam=0;
    int x=1;

    printf("Kaca kadar toplamak istiyorsunuz?\n");
    scanf("%d",&sayi);

    int girilensayi = sayi;

    while(sayi>0){

      //  printf("%d\n",x);
        toplam = toplam + x;
        x++;
        sayi--;
    }
        printf("1den %d e kadar olan sayilarin toplami: %d\n ",girilensayi,toplam);

    return 0;
}
