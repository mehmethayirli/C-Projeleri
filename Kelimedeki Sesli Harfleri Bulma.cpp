#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x=0,a=0,e=0,i=0,u=0,o=0;
    char ad[30];
    printf("Kelime girin: \n");
    scanf("%29s",ad);
    while(ad[x] != '\0'){

      switch(ad[x]){

         case 'a':
        case 'A':
            a++;
            break;
         case 'e':
        case 'E':
            e++;
            break;
         case 'i':
        case 'I':
            i++;
            break;
          case 'u':
        case 'U':
            u++;
            break;
         case 'o':
        case 'O':
            o++;
            break;
        default:
            break;
            return 0;
        }
        
      //  printf("%d. harf : %c\n",x+1,ad[x]);
        x++;
  }
    printf("Kelimdeki sesli harfler:\nA=%d\nE=%d\nI=%d\nO=%d\nU=%d\n",a,e,i,o,u);
    printf("Kelimede %d sesli harf var\n",a+e+i+o+u);
    
    return 0;
}

