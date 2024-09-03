#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Declaração de Variavel
    int idad1,idad2,idad3,media;
    
    //Entrada de dados
    printf ("digite a primeira idade: ");
        scanf ("%d", &idad1);
    printf ("digite a segunda idade: ");
        scanf("%d", &idad2);
    printf ("digite a terceira idade: ");
        scanf("%d", &idad3);
        
        //Processamento
        media = (idad1 + idad2 + idad3) / 3;
        
        //Saida de Dados
    printf ("a media das três idades é: %d ",media);
    
    return 0;

}