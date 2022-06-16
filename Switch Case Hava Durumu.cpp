#include <stdio.h>
#include <stdlib.h>

int main()
{
    int secim;
    printf("1.Yaz\n2.Kis\n3.Ilkbahar\n4.Sonbahar\n");
    scanf("%d",&secim);

    switch (secim)
    {
    case 1:printf("Hava cok sicak..\n");break;
    case 2:printf("Hava cok soguk..\n");break;
    case 3:printf("Hava cok guzel..\n");break;
    case 4:printf("Hava yagmurlu..\n");break;
    default: printf("Lutfen 1 ila 4 arasi sayi giriniz..\n");
    }

    return 0;
}
