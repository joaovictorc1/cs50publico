#include <cs50.h>
#include <stdio.h>

int main(void)
{
    //ask the user for the height
    int n;
    do
    {
        n = get_int("Height(1-8): \n");
    }
    while (n < 1  || n > 100);

    //For each row
    for (int i = 0; i < n; i++)
    {
        //Loop when to print in each column
        for (int j = 0; j < n+i+3; j++)
        {
            //When to print a space and when to print a hash
            if(j == n || j == n+1 || i+j < n-1)

                    printf(" ");
                else

                    printf("#");
            }
        // Move to next row
        printf("\n");
    }
}


