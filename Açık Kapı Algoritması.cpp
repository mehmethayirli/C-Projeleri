#include <stdio.h>
#include <stdlib.h>

int main()
{
    int acik[11]={0}; //kapali
    int tur,kapi;

    for(tur=1;tur<11;tur++){
        for(kapi=tur;kapi<11;kapi+=tur){
            acik[kapi]= !acik[kapi];
        }
    }

    printf("Acik kapilar: ");

    for(kapi=0;kapi<10;kapi++){
        if(acik[kapi])
            printf("%d ",kapi);
    }

    return 0;
}
