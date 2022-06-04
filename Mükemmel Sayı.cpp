#include <stdio.h>
#include <stdlib.h>
// mukemmel sayi = pbslerin toplami = sayi

int mukemmelSayiMi(int sayi){
    int toplam = 1;
    if(sayi==1)
        return 0;

    for(int carpan=2;carpan<=sayi/2;carpan++){
        if(sayi % carpan==0)
            toplam +=carpan;
    }
    if(toplam==sayi)
        return 1; // mukemmel sayi
    else
        return 0; // degil
}

int main()
{
    int sayi;
    printf("Mukemmel olup olmadigini sorgulamak icin sayi giriniz.\n");
    scanf("%d",&sayi);

    if(mukemmelSayiMi(sayi)==1)
        printf("%d Mukemmeldir.\n",sayi);
    else
        printf("%d Mukemmel degildir.\n",sayi);

    return 0;
}
