#include <stdio.h>

int main(void)
{
    char string[] = "Exercicio de APC II";
    char *p = string;
    char caractere;
    char *caractereUsuario = NULL;

    scanf("%c", &caractere);

    while(*p != '\0')
    {
        if (*p == caractere)
        {
            caractereUsuario = p;
        }
        p++;
    }

    if (caractereUsuario != NULL)
        printf("%p\n", caractereUsuario);
    else
        printf("Caractere não encontrado\n");

    return 0;
}
