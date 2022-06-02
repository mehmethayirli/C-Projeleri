#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
   
//   char isim[]="Mehmet";  
//   printf("%d\n",strlen(isim)); // strlen
   
  	char isim[15];
  	int i;
  	
  	printf("Kelime: ");
	gets(isim);
	
  	int uzunluk = strlen(isim);
  	
  	for(i=0;i<uzunluk;i++)  
  		printf("%c",isim[i]);
  		
  		printf("\n");	// harf sorgusu
	
   	for(i=uzunluk-1;i>=0;i--)
   		printf("%c",isim[i]);

   return 0;
}

