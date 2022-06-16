#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int n;
    do
    {
        n = get_int("Altura: ");
    }
    while (n < 1 || n > 8);

    for (int l = 0; l < n; l++)
    {
        for (int i = 0; i < n; i++)
        {
            if (l + i < n - 1)
                printf(" ");
           else
                printf("#");
        }
        printf("\n");
    }
};