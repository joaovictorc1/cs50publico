#include <cs50.h>
#include <ctype.h>
#include <math.h>
#include <stdio.h>

int count_letters(string text);
int count_words(string text);
int count_sentences(string text);
int coleman_liau_index(int count_letters, int count_words, int count_sentences);

int main(void)
{
    string text = get_string("Text: ");
    int count_letters2 = count_letters(text);
    int count_words2 = count_words(text);
    int count_sentences2 = count_sentences(text);
    int index = coleman_liau_index(count_letters2, count_words2, count_sentences2);
    if (index >= 16)
    {
        printf("Grade 16+\n");
    }
    else if (index < 1)
    {
        printf("Before Grade 1\n");
    }
    else
    {
        printf("Grade %d\n", index);
    }
}

//Count the number of letters
int count_letters(string text)
{
    int letters = 0;
    for (int i = 0; text[i]; i++)
    {
        if (isalpha(text[i]))
        {
            letters++;
        }
    }
    return letters;
}

//Count the number of words
int count_words(string text)
{
    int words = 1;
    for (int i = 0; text[i]; i++)
    {
        if (isspace(text[i]))
        {
            words++;
        }
    }
    return words;
}


//Count the number of sentences
int count_sentences(string text)
{
    int sentences = 0;
    for (int i = 0; text[i]; i++)
    {
        if (text[i] == '.' || text[i] == '?' || text[i] == '!')
        {
            sentences++;
        }
    }
    return sentences;
}

//Calculate the Coleman-Liau index
int coleman_liau_index(int count_letters, int count_words, int count_sentences)
{
    float l = (float)count_letters / (float)count_words * 100; //Calculate the average number of letters per 100 words in the text
    float s = (float)count_sentences / (float)count_words * 100; //Calculate the average number of sentences per 100 words in the text
    int index = round(0.0588 * l - 0.296 * s - 15.8); //Calculate the Coleman_Liau index
    return index;
}