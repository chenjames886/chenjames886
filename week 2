#include <cs50.h>
#include <stdio.h>
#include <math.h>
int getlen(string n);
int main(void)
{
    string word = get_string("Text: ");
    int a = getlen(word), letters = 0, wordc = 1, sent = 0, sco = 0;
    float score = 0;
    for (int i = 0; i < a; i++)
    {
        if (word[i] == ' ')
        {
            wordc++;
        }
        else if (word[i] == '.' || word[i] == '!' || word[i] == '?')
        {
            sent++;
        }
        else if (word[i] != ',' && word[i] != '\'' && word[i] != '-' && word[i] != ';')
        {
            letters++;
        }
    }
    score = 0.0588 * (letters / (float)wordc * 100) - 0.296 * ((float)sent / wordc * 100) - 15.8;
    sco = round(score);
    if (sco < 1)
    {
        printf("Before Grade 1\n");
    }
    else if (sco > 15)
    {
        printf("Grade 16+\n");
    }
    else
    {
        printf("Grade %d\n", sco);
    }

}
int getlen(string n)
{
    int len=0;
    while (n[len] != '\0')
    {
        len++;
    }
    return len;
}
