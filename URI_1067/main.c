#include <stdio.h>
#include <stdlib.h>

int main()
{
   /*     Leia um valor inteiro X (1 <= X <= 1000). Em seguida mostre os �mpares de 1 at� X, um valor por linha, inclusive o X, se for o caso.

    Entrada
    O arquivo de entrada cont�m 1 valor inteiro qualquer.

    Sa�da
    Imprima todos os valores �mpares de 1 at� X, inclusive X, se for o caso.

    */


    int X;
    scanf("%d", &X);

    int i;

    for(i=1;i<=X;i+=2){
        printf("%d\n",i);
    }

    return 0;
}
