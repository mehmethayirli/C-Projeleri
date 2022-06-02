#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

	char kelime[20];
	char tersi[20];

	printf("Kelime gir..\n");
	scanf("%s",kelime);

	int uzunluk=strlen(kelime);

	strcpy(tersi,kelime);
	strrev(tersi);

	if(strcmp(kelime,tersi)==0)
		printf("Kelime palindrom");
	else
		printf("Kelime palindrom degil");

	return 0;
}
