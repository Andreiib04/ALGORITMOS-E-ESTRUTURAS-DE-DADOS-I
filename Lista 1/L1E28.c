#include <stdio.h>

int main()
{
    int i;
    float media, nota, total;
    for ( i = 1; i < 5; i++)
    {
        printf("Digite a nota %d\n", i);
        scanf("%f", &nota);
        total= total+nota;
    }
    media=total/4;
printf("A media das noas e:%.2f", media);
   
   
    return 0;
}