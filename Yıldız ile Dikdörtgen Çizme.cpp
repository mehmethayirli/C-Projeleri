#include <stdio.h>
#include <conio.h>
int main()
{
    int uzunkenar,kisakenar;
    int i,j;
    
    printf("Uzun Kenari Giriniz:");
    scanf("%d",&uzunkenar);
    
    printf("Kisa Kenari Giriniz:");
    scanf("%d",&kisakenar);
    
    for
    (i=1; i<=kisakenar; i++)
    {
        for
        (j=1; j<=uzunkenar; j++)
        {
            if (i==1)
                printf("*  ");
            else if
            (i==kisakenar)
                printf("*  ");
            else if
            (j==1 || j==uzunkenar)
                printf("*  ");
            else
                printf("   ");
        }
        printf("\n");
    }
    return 0;
}
