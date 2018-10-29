#include <stdio.h>
#include <stdlib.h>

int main()
{
        /* Leia a hora inicial, minuto inicial, hora final e minuto final de um jogo.
        A seguir calcule a duração do jogo.

    Obs: O jogo tem duração mínima de um (1) minuto e duração máxima de 24 horas.

    Entrada
    Quatro números inteiros representando a hora de início e fim do jogo.

    Saída
    Mostre a seguinte mensagem: “O JOGO DUROU XXX HORA(S) E YYY MINUTO(S)” . */

        int hi,mi,hf,mf, horas, minutos;

        scanf("%d %d %d %d", &hi,&mi,&hf,&mf);



        if(mi == mf) minutos = 0;
        if(mi < mf) minutos = mf-mi;
        if(mi > mf) minutos = (60 - mi) + mf;
        if(hi == hf) {
            if( mf == mi)  {
              horas = 24;
}
        else {horas = 23;}

        }
        if(hi > hf) horas = (hi - 24) + hf;
        if(hi < hf) horas = hf - hi;
        if(hi < hf && mi > mf) horas = 0;




        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)",horas, minutos);






      /*     if(mi == mf) printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)",24 ,0);
        else if(mi < mf)



        } */

        //printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)", , );


        return 0;
}
