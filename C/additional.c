 #include <cs50.h>
 #include <stdio.h>

 // style50 hello.c com o nome do arquivo de nosso código-fonte, para ver sugestões de novas linhas e recuo.
 // help50 make hello , para obter conselhos que possam ser mais compreensíveis.
 // check50 irá verificar a exatidão do nosso código com alguns testes automatizados.

int main(void)
{
    // Pega os números do usuário
    long x = get_int("x: ");

    long y = get_int("y: ");


    printf("%li\n", x + y);

}