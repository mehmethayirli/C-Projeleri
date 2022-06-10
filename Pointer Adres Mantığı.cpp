#include <stdio.h>
#include <stdlib.h>

int main()
{
    int dizi[]={5,4,8,9,11};
    int *ptr;
    ptr=&dizi;

    printf("%d ",*(ptr+1));
    printf("Adresi: %u\n",(ptr));
    printf("\n");

    for(int i=0;i<5;i++){
        printf("%d  ",*(ptr+i));
        printf("Adresi: %x\n",(ptr+i));
    }

/*
    for(int i=0;i<5;i++)
        printf("%d. Eleman: %d\n",i+1,dizi[i]);
*/
    return 0;
}
