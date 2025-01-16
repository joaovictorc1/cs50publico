#include <stdio.h>

int main() {
    char hello[] = "Hello";
    char world[] = "World";


    char *ptr = hello;
    while (*ptr != '\0')
    {
        ptr++;
    }

    char *ptr2 = world;

    // Copia os caracteres de world para o final de hello
    while (*ptr2 != '\0') {
        *ptr = *ptr2;
        ptr++;
        ptr2++;
    }

    // Adiciona o caractere nulo ao final da string resultante
    *ptr = '\0';

    // Imprime a string resultante
    printf("%s\n", hello);

    return 0;
}
