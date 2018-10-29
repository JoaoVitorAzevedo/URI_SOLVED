#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello world!\n");
    /* Leia a hora inicial e a hora final de um jogo. A seguir calcule a duração do jogo,
    sabendo que o mesmo pode começar em um dia e terminar em outro, tendo uma duração mínima de 1 hora e máxima de 24 horas.

Entrada
A entrada contém dois valores inteiros representando a hora de início e a hora de fim do jogo.

Saída
Apresente a duração do jogo conforme exemplo abaixo. */

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
