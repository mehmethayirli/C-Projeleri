#include <stdio.h>
#include <stdlib.h>

void sayilariDegis(int *x,int *y){

    int temp = *x;
    *x=*y;
    *y=temp;
}

int main()
{
    int x,y;
    printf("Degistirmek istediginiz 2 sayiyi girin.\n");
    scanf("%d %d",&x,&y);

    printf("%d %d\n",x,y);
    sayilariDegis(&x,&y);

    printf("%d %d",x,y);

    return 0;
}
