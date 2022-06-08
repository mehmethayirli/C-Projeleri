#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int sesli(char cumle[]){
    char sesli[]="aeiou"; //sesli harfler
    int i=0,a,sayac=0;
    while(cumle[i]!='\0'){ //cumle bitene kadar dongu kur
        for(a=0;a<5;a++) //sesli harfleri gez
            if(cumle[i]==sesli[a]){ //cumledeki bir harf sesli harflere esitse sayaci bir artir
                sayac++;
                break;
              }
        i++;
    }
    return sayac; //sayac degerini geri dondur
}
int main(){
	char cumle[100];
    printf("Cumle Girin: ");
    scanf("%s",cumle);; //gets ile cümleyi al
    printf("Cumlede %d sesli harf var\n",sesli(cumle));
    
    return 0;
}
