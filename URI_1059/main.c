#include <stdio.h>
#include <stdlib.h>

int main()
        {
            /* Fa�a um programa que mostre os n�meros pares entre 1 e 100, inclusive.

        Entrada
        Neste problema extremamente simples de repeti��o n�o h� entrada.

        Sa�da
        Imprima todos os n�meros pares entre 1 e 100, inclusive se for o caso, um em cada linha. */

        int i;

        for(i=1;i<=100;i++){
            if(i%2 == 0)
                printf("%d\n",i);
        }
            return 0;
}
