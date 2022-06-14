#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sayi,sutun,satir;
    printf("Sayi giriniz..\n");
    scanf("%d",&sayi);

    for(satir=1;satir<=sayi;satir++){
        for(sutun=1;sutun<=satir;sutun++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
