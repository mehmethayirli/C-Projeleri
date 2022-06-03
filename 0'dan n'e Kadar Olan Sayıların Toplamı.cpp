#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sayi,toplam=0;
    
    printf("Bir sayi giriniz..\n");
    scanf("%d",&sayi);

    for(int i=0;i<=sayi;i++){
        toplam = i+toplam;
    }
    printf("0'dan %d'ye kadar olan sayilarin toplami: %d\n",sayi,toplam);
    
    return 0;
}

