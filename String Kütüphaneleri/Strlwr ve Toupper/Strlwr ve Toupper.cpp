#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

	char kelime[20];
	printf("Kelime giriniz girin..\n");
	gets(kelime);

	printf("Buyuk: %s\n",toupper(kelime));
	printf("Kucuk: %s\n",strlwr(kelime));

	return 0;
}

