#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
      // TODO: Solicite o valor inicial ao usuário
    int n, m;
    do
    {
        n = get_int("Star Size: ");
    }
    while (n < 9);
     // TODO: Solicite o valor final ao usuário
    do
    {
        m = get_int("End Size: ");
    }
    while (m < n);
     // TODO: Calcule o número de anos até o limite
    int a = 0;
    while (n < m)
    {
        n = n + (n / 3) - (n / 4);
        a++;
    };
     // TODO: Imprima o número de anos
    printf("Years: %i\n", a);
}