#include <stdio.h>

int main(void)
{
    int numero;
    //seu codigo continua aqui
    int *p = &numero;
    *p = 5;
    printf("%d\n", *p);
    return 0;
}
