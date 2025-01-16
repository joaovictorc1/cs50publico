#include <cs50.h>
#include <stdio.h>
#include <string.h>

const int BITS_IN_BYTE = 8;
void print_bulb(int bit);

int main(void)
{
    //Ask the user for a message
    string message = get_string("Message: ");
    //Calculate the size of the message
    int message_size = strlen(message);
    //Convert each char of the string in their respective number of the ASCII
    for (int i = 0; i < message_size; i++)
    {
        int message_ascii = message[i];
        //Convert each number of the ASCII in binary
        int message_binary[BITS_IN_BYTE];
        for (int j = 0; j < BITS_IN_BYTE; j++)
        {
            message_binary[j] = message_ascii % 2;
            message_ascii = message_ascii / 2;
        }
        //Invert the order of the binary number
        for (int k = BITS_IN_BYTE - 1; k >= 0; k--)
        {
            //Print if the bulb is on or off instead of the binary number
            print_bulb(message_binary[k]);
        }
        printf("\n");
    }
}

void print_bulb(int bit)
{
    if (bit == 0)
    {
        // Dark emoji
        printf("\U000026AB");
    }
    else if (bit == 1)
    {
        // Light emoji
        printf("\U0001F7E1");
    }
}
