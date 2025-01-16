#include <stdio.h>

int main (void)
{
    int n1 = 3, n2 = 5;
    //seu código continua aqui
    int *p1 = &n1, *p2 = &n2;
    *p1 == &n2;
    *p2 == &n1;
    printf("n1: %d, n2: %d\n", n1, n2); //espera-se exibir n1: 5, n2: 3
    return 0;
}
