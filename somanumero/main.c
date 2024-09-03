#include <stdio.h>

int soma (int a, int b); // Precisei de uma Função

int main()
{
       int x1,x2,resul;
       
    printf ("digite o primeiro numero:\t "); 
        scanf( "%d", &x1);
    printf ("digite o segundo numero:\t "); 
        scanf( "%d", &x2);
    
        resul = x1 + x2;
        
    printf ("o resultado da soma entre os numeros %d e %d é: %d ",x1,x2,resul);
    getch();
  
  // Inicio da Função
  int soma (int a, int b)
  
  {
      int resul;
      resul = a + b;
      return (resul);
  }
   
}





