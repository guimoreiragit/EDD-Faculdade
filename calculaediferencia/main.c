/******************************************************************************

6.FaC'a um algoritmo que receba dois nC:meros, calcule a divisC#o, a multiplicaC'C#o,
a soma, a diferenC'a entre eles e mostre os resultados.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

int main ()
{
  //Declaraçâo de Variavel
  float nun1, nun2, mult, divi, midDiff;
  int soma;


  //Entrada de Dados
  printf ("digite o primeiro numero: ");
    scanf ("%f", &nun1);
  printf ("digite o segundo numero: ");
    scanf ("%f", &nun2);

  //Processamento de Dados
  divi = nun1 / nun2;
  mult = nun1 * nun2;
  soma = nun1 + nun2;
  midDiff = nun1 != nun2;

  //Saida de Dados
  printf ("a divisão entre os numeros é: %2.f \n", divi);
  printf ("a multiplicação entre os numeros é: %2.f \n", mult);
  printf ("a soma entre os os numeros é: %d \n", soma);
  printf ("a diferença entre os numeros é: %2.f \n", midDiff);

  return 0;
}
