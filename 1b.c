#include <stdio.h>

int main(void)
{
    char string[50] = "Avaliacao 1";
    char *p = string;
    int i = 0;
    while(string[i] != '\0')
    {
        printf("string[%d]: %d\n", i, *(p + i));
        i++;
    }
    return 0;
}
