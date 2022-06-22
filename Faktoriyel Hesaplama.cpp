#include <stdio.h>
 
int main()
{
    int faktoriyel = 1; 
    int sayi;
    
    printf("Hesaplamak istediginiz faktoriyel: ");
    scanf("%d",&sayi);
    
    for(int i = 1; i <= sayi; i++)
    {
        faktoriyel *= i;                                      
    }
    printf("%d!= %d",sayi, faktoriyel);
    
	return 0;
}
