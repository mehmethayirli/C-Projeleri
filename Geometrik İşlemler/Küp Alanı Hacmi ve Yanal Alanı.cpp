#include <stdio.h>
#include <stdlib.h>

int main()
{
    int kenar;

    printf("Kenar girin \n");
    scanf("%d",&kenar);

    printf("Kupun Alani : %d\n", kenar*kenar);
    printf("Kupun Hacmi: %d\n",kenar*kenar*kenar);
    printf("Kupun Yanal Alanlari Toplami: %d\n",6*kenar*kenar);

    /* int kenar;

    printf("Kenar gir \n");
    scanf("%d",&kenar);

    int kupunalani = kenar*kenar;
    int kupunyanalalanlartoplami = 6*kenar*kenar;
    int kupunhacmi = kenar*kenar*kenar;

    printf("Kupun Alani: %d\n",kupunalani);
    printf("Kupun Hacmi: %d\n",kupunhacmi);
    printf("Kupun Yanal Alanlar Toplami %d\n",kupunyanalalanlartoplami); */

    return 0;
}
