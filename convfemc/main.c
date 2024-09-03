/******************************************************************************

8.Faça um algoritmo que leia uma temperatura fornecida em graus Fahrenheit e
a converta para o seu equivalente em graus centígrados.  C = 5/9 (F-32)

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    //declaração
    float pharah, c, resul;
    
    //Entrada
    printf ("Qual é a temparaturam em Fahrenheit que deseja converter em centigrados?  ");
        scanf ("%f", &pharah);
        
    //Processamento
    c = (pharah - 32) * 5 / 9;
    
    //Saída
    printf("o valor convertido é %4.f ºC", c);

    return 0;
}

