/*
    7.Leia dois valores para as variáveis A e B, efetue a troca dos valores de forma
    que a variável A passe a ter o valor da variável B e que a variável B, o valor da
    variável A. Apresentar os valores trocados.
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Declaração de Variavel
    int x, y;
    
    //Entrada de dados
    printf ("digite o primeiro valor: ");
        scanf ("%d", &x);
    printf ("digite o segundo valor: ");
        scanf("%d", &y);
    
    //Processamento
    x = x + y; 
    y = x - y;
    x = x - y; 
    
    //Saida
    printf ("o primeiro valor trocado é: %d \n", x);
    printf ("o segundo valor trocado é: %d \n", y);

    return 0;
}
