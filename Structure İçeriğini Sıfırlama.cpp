#include <stdio.h>
#include <string.h>

typedef struct {
  int id1;
  int id2;
  char cdizi[20];
} DataType;

DataType Data[5];

int main(void)
{
  int id1;

  Data[1].id1 = 9;
  Data[1].id2 = 11;
  strcpy(Data[1].cdizi, "Karakter dizisi 1");

  Data[3].id1 = 15;
  Data[3].id2 = 38;
  strcpy(Data[3].cdizi, "Karakter dizisi 2");

  printf("%d %d %s\n", Data[1].id1, Data[1].id2, Data[1].cdizi);
  printf("%d %d %s\n\n", Data[3].id1, Data[3].id2, Data[3].cdizi);

  for (id1=0; id1<5; id1++) {
       memset(&Data[id1], 0, sizeof(DataType));
  }

  printf("%d %d %s\n", Data[1].id1, Data[1].id2, Data[1].cdizi);
  printf("%d %d %s", Data[3].id1, Data[3].id2, Data[3].cdizi);

  return 0;
}
