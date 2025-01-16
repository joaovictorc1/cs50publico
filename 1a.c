#include <stdio.h>

int main(void)
{
    char string[50] = {4, 6, 3, 8, 2, 5, 9, 1};

    //Ponteiro apontando para o 1° elemento da array
    char *p = string;

    for (int i = 0; i < 8; i++)
    {
        printf("string[%d]: %d\n", i, *(p + i));
    }

    return 0;
}
