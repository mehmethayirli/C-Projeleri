#include <stdlib.h>
#include <stdio.h>
#include <string.h>


int main(){
	
	char isim[20]=("MehmetHayirli");
	char soyisim[6];
	
//	strcpy(soyisim,isim);
//	printf("Isim: %s\n",soyisim);

// 	strcpy(x,y); x'in icerisine y yaz
	
	strncpy(soyisim,isim,7);
	printf("Isim2: %s",soyisim);
	
	return 0;
}
