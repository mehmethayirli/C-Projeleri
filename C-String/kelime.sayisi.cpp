#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main() {
    char dizi[500];
    int kelimeSayisi=0;
    int i=0;

    puts("Bir cumle giriniz:");
    gets(dizi);

    while (dizi[i]!='\0') {

        if(dizi[i]==' ')
            kelimeSayisi++;
        i++;
    }
    
	if(isalnum(dizi[1])==0)
		  printf("Girdiginiz cumle %d kelimeden olusuyor.", kelimeSayisi);
	else
		  printf("Girdiginiz cumle %d kelimeden olusuyor.", kelimeSayisi+1);
  
    return 0;
}
