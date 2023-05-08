#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int hei;
    do
    {
        hei = get_int("Height: ");
    }
    while (hei > 8 || hei < 1);
    for (int i = 0; i < hei; i++)
    {
        for (int j = 0; j < hei-1-i; j++)
        {
            printf(" ");
        }
        for (int k = 0; k < i+1; k++)
        {
            printf("#");
        }
        printf("  ");
        for (int l = 0; l < i+1; l++)
        {
            printf("#");
        }
        printf("\n");
    }
}
