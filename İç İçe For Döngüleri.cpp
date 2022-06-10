#include <stdio.h>
#include <stdlib.h>

int main()
{
   /* int i,j;
    for(i=0;i<10;i++){
        for(j=0;j<10;j++){
            printf("%d %d\n",i,j);
        }
    } */

  /*  int i,j,k;
    for(i=1,j=1,k=1;i<10;i++,j++,k++){
        printf("%d %d %d\n",i,j,k);
    } */

    int i,j;
    for(i=1;i<=10;i++){
        for(j=1;j<=10;j++){
            printf("%d x %d = %d\t",i,j,i*j);
        }
        printf("\n");
    }

    return 0;
}
