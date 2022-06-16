#include <stdio.h>
#include <cs50.h> //adiciona biblioteca do CS50

int main(void)
{
   // get_string é uma função especifica da biblioteca CS50
   string nome = get_string("Qual é seu nome?\n");
   printf("Olá, %s \n", nome);

    printf("Hello, world!\n");
}