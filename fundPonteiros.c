#include <stdio.h>

int main(void)
{
    int i = 5;
    int *p = &i;

    //Instrução 1: Atribuindo diretamente um novo valor à *p
    *p = 7;
    printf("&p: %p\n", &p);
    printf("p (&i - endereço de i): %p\n", p);
    printf("*p ( i - valor de i): %d\n", *p);

    //Instrução 2: Utilizando scanf
    scanf("%d", p);
    printf("&p: %p\n", &p);
    printf("p (&i - endereço de i): %p\n", p);
    printf("*p ( i - valor de i): %d\n", *p);
    
    return 0;
}



