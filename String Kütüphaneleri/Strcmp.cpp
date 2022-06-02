#include <stdio.h>
#include <string.h>

int main() {
  char str1[] = "Ostim";
  char str2[] = "ostim";
  char str3[] = "ostim ";
  char str4[] = "oSTim";

  int result;

  result = strcmp(str1, str2);

  printf("strcmp(str1, str2) = %d\n", result);

  result = strcmp(str1, str3);
  printf("strcmp(str1, str3) = %d\n", result);

  result = strcmp(str1, str4);
  printf("strcmp(str1, str4) = %d\n", result);

	char isim[]="mehmet";
	char isim2[]=" mehmet";
	char isim3[]="amehmet";
	char isim4[]="zmehmet";

//	printf("%d",strcmp(isim,isim2));

	if(strcmp(isim,isim3)>0) //2. buyuk 1 basacak
		printf("2.buyuk 1\n");

	if(strcmp(isim,isim4)<0) //1. buyuk -1 basacak
		printf("1.buyuk -1\n");

	if(strcmp(isim,isim2)==0) //esitler
		printf("esitler 0 \n");

  return 0;
}
