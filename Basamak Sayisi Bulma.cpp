#include <stdio.h>
#include <stdlib.h>

int basamakSayisiniBul(int sayi){

    int basamakSayisi=0; //0dan baslat

    if(sayi>=0){
        do{
            basamakSayisi++;
            sayi=sayi/10;
          }
        while(sayi>0);
    }
     return basamakSayisi;
}

int main(){
    int sayi;
    printf("Basamak sayisini ogrenmek istediginiz sayi: ");
    scanf("%d",&sayi);

    printf("Basamak Sayisi: %d\n",basamakSayisiniBul(sayi));

    return 0;
}
