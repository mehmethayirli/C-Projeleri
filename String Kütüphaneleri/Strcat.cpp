#include <stdio.h>
#include <string.h>

int main() {
  char str1[] = "OSTIM Technical University";
  char str2[] = "OSTIM Teknik Universitesi";

  int result;

  result = strcmp(str1, str2);
  printf("strcmp(str1, str2) = %d\n", result);

  result = strncmp(str1, str2,5);
  printf("strncmp(str1, str3,5) = %d\n", result);

  result = strncmp(str1, str2,8);
  printf("strncmp(str1, str2,8) = %d\n", result);

  result = strncmp(str1, str2,9);
  printf("strncmp(str1, str2,9) = %d\n", result);

  return 0;
}
