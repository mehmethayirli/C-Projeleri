#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
	char dizi1[255],dizi2[255];
	
	int len,len1;
	printf("Kelime girin..\n");
	gets(dizi1);
	
	len=strlen(dizi1);
	
	for(int i=0;i<len;i++){
		dizi2[i]=dizi1[len-i-1];
	}
	
	printf("%s",dizi2);
	
	
	return 0;
}
