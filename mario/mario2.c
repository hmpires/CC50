#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int a;
    do
    {
        a = get_int("Altura: ");
    }
    while (a < 1 || a > 8);

    for (int l = 0; l < a; l++)
    {
        for (int s = 0; s < a - l - 1; s++)
        {
           printf(" ");
        }
        for (int c = 0; c <= l; c++)
        {
            printf("#");
        }
        printf("  ");
        for (int c = 0; c <=l; c++)
        {
            printf("#");
        }
        printf("\n");
    }
};