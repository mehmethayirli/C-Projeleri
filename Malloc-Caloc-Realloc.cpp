#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *alan1=malloc(10*sizeof(int));
    int *alan2=calloc(10,sizeof(int));
	
	int i;
    for(i=0;i<10;i++)
       printf("alan1[%d]=%d  alan[%d]=%d \n",i,alan1[i],i,alan2[i]);

    alan1= realloc(alan1,15*sizeof(int));//eski alani koruyup yeni alan acar
    printf("\n");

    for(i=0;i<15;i++)
        printf("alan1[%d]=%d \n",i,alan1[i]);

    free(alan1);
    free(alan2);

    return 0;
}
