#include <stdio.h>
#include <stdlib.h>

#define saat(karakter) (karakter == 'E' || karakter == 'e') ? __TIME__ : "Ogrenilmek istenmedi"
//E veya e girilise saat konsola yazdirilir. Farkli bir harf girilirse saat yazdirilmaz.

int main()
{
    char girilenkarakter;
    printf("Saati ogrenmek ister misiniz?\n");
    scanf("%c",&girilenkarakter);

    if(saat(girilenkarakter)){
        printf("%s\n",saat(girilenkarakter));
    }
    
    else {
        printf("Saat ogrenilmedi..\n");
    }

    return 0;
}

