#include <stdio.h>
#include <stdlib.h>

int main()
{ /*
   Leia 2 valores com uma casa decimal (x e y), que devem representar as coordenadas de um ponto em um plano.
   A seguir, determine qual o quadrante ao qual pertence o ponto, ou se est� sobre um dos eixos cartesianos ou na origem (x = y = 0).
   Se o ponto estiver na origem, escreva a mensagem �Origem�.
Se o ponto estiver sobre um dos eixos escreva �Eixo X� ou �Eixo Y�, conforme for a situa��o.

Entrada
A entrada contem as coordenadas de um ponto.

Sa�da
A sa�da deve apresentar o quadrante em que o ponto se encontra. */

        double X,Y;
    //    printf("Informe x:\n");

        scanf("%lf",&X);
      //  printf("Informe y:\n");

        scanf("%lf",&Y);

        if(X==0 && Y==0)             printf("Origem\n");
        else if(X==0)                printf("Eixo Y\n");
        else if(Y==0)                printf("Eixo X\n");
        else if(X > 0 && Y > 0)      printf("Q1\n");
        else if(X > 0 && Y < 0)      printf("Q4\n");
        else if(X < 0 && Y < 0)      printf("Q3\n");
        else if(X < 0 && Y > 0)      printf("Q2\n");




    return 0;
}
