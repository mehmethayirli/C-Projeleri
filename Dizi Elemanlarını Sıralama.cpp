#include <stdio.h>
#include <stdlib.h>

void bubbleSort(int dizi[],int boyut){

    for(int i=0;i<boyut;i++){
        for(int j=1;j<boyut;j++)
        {
            if(dizi[j-1]<dizi[j]){
                int yedek=dizi[j];
                dizi[j]=dizi[j-1];
                dizi[j-1]=yedek;
            }
        }
    }
}

int main()
{
    int sayiDizisi[100],boyut;

    printf("Kac elemanli dizi olusturmak istiyorsunuz?\n");
    scanf("%d",&boyut);

    for(int i=0;i<boyut;i++){
        printf("%d. elemani giriniz\n",i+1);
        scanf("%d",&sayiDizisi[i]);
    }

    for(int i=0;i<boyut;i++)
        printf("%d ",sayiDizisi[i]);

    printf("\n");

    bubbleSort(sayiDizisi,boyut);

    for(int i=0;i<boyut;i++)
        printf("%d ",sayiDizisi[i]);

    return 0;
}
