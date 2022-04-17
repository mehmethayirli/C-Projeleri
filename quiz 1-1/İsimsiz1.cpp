#include <stdio.h>
#include <stdlib.h>

void hesapla(int *a,int *b,int *c){
	int ort;
	ort=(*a+*b+*c)/3;
	*a=ort;	
}
	

int main(){
	
	int a,b,c;
	
	printf("3 sayi girin.\n");
	scanf("%d%d%d",&a,&b,&c);	
	hesapla(&a,&b,&c);
	
	printf("ort: %d",a);
	
	
	return 0;
}
