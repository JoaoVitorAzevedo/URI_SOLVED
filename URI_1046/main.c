#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello world!\n");
    /* Leia a hora inicial e a hora final de um jogo. A seguir calcule a dura��o do jogo,
    sabendo que o mesmo pode come�ar em um dia e terminar em outro, tendo uma dura��o m�nima de 1 hora e m�xima de 24 horas.

Entrada
A entrada cont�m dois valores inteiros representando a hora de in�cio e a hora de fim do jogo.

Sa�da
Apresente a dura��o do jogo conforme exemplo abaixo. */

        int i,f;

        scanf("%d %d", &i,&f);
        if(i==f) printf("O JOGO DUROU %d HORA(S)\n", 24);

        else if(i>f)
            printf("O JOGO DUROU %d HORA(S)\n", ( 24 - i) + f);
        else if(i<f){
            printf("O JOGO DUROU %d HORA(S)\n", f - i);


        }

    return 0;
}
