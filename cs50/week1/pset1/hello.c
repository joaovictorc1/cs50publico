#include <stdio.h>
#include <cs50.h>

int main(void)
{
    //ask for the users name
    string name = get_string("What's your name? ");

    //print hello and the users name after it
    printf("hello, %s\n", name);
}