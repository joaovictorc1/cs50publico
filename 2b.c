#include <stdio.h>

int main(void)
{
    char string[] = "Exercicio de APC II";
    char *ptr = string;
    char *p = string;
    int total_caracteres = 0;

    // Encontre o caractere nulo '\0'
    while (*p != '\0')
    {
        p++;
    }

    // Calcula o número de caracteres
    total_caracteres = p - ptr;

    printf("%d\n", total_caracteres);

    return 0;
}
