#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
	char dizi1[255],dizi2[255];
	
	int len,len1;
	printf("Kelime girin..\n");
	gets(dizi1);
	
	len=strlen(dizi1);
	
	for(int i1=0;i1<len;i1++){
		dizi2[i1]=dizi1[len-i1-1];
	}
	
	printf("%s",dizi2);
	
	
	return 0;
}
