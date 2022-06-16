#include <stdio.h>
#include <stdlib.h>

int main()
{
    char sifre[80];
    char sifreDogrulama[80];
    int i,yanlis;

    while(1){
        yanlis=0;
        i=0;

        printf("Parolanizi girin..\n");
        scanf("%s",sifre);
        printf("Parolanizi tekrar girin..\n");
        scanf("%s",sifreDogrulama);

        while( (sifre[i]!='\0' && sifreDogrulama[i]!='\0')){
            if(sifre[i] != sifreDogrulama[i]){
                printf("Hatali giris yaptiniz..\n");
             //   yanlis=1;
                break; }
             else {
                i++;
             }
        }
            if(yanlis==0)
                printf("Parolalar uyustu. Giris basarili..\n");break;
    }
    return 0;
}
