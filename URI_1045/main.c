#include <stdio.h>
#include <stdlib.h>

int main()
{

    /* Leia 3 valores de ponto flutuante A, B e C e ordene-os em ordem decrescente, de modo que o lado A representa o maior dos 3 lados.
    A seguir, determine o tipo de triângulo que estes três lados formam, com base nos seguintes casos, sempre escrevendo uma mensagem adequada:
se A ≥ B+C, apresente a mensagem: NAO FORMA TRIANGULO
se A2 = B2 + C2, apresente a mensagem: TRIANGULO RETANGULO
se A2 > B2 + C2, apresente a mensagem: TRIANGULO OBTUSANGULO
se A2 < B2 + C2, apresente a mensagem: TRIANGULO ACUTANGULO
se os três lados forem iguais, apresente a mensagem: TRIANGULO EQUILATERO
se apenas dois dos lados forem iguais, apresente a mensagem: TRIANGULO ISOSCELES

Entrada
A entrada contem três valores de ponto flutuante de dupla precisão A (0 < A) , B (0 < B) e C (0 < C).

Saída
Imprima todas as classificações do triângulo especificado na entrada.

 */
float A, B, C;
    scanf("%f %f %f", &A, &B,&C);
    float aux = 0;  int i,j;
    float vetor[3] = {A,B,C};

    for(i=0;i<3;i++)

        for(j=0;j<2;j++)

    if(vetor[j] <= vetor[j+1]){
        aux = vetor[j];
        vetor[j] = vetor[j+1];
        vetor[j+1] = aux;
    }

    for(i=0;i<3;i++) {
        printf("%f\n", vetor[i]);

    }

    A = vetor[0];
    B = vetor[1];
    C = vetor[2];


    if(A >= (B + C))            printf("NAO FORMA TRIANGULO\n");
    if(A*A == ((B*B) + (C*C)))  printf("TRIANGULO RETANGULO\n");
    if(A*A > ((B*B) + (C*C)) && A < (B+C))   printf("TRIANGULO OBTUSANGULO\n");
    if(A*A < ((B*B) + (C*C)))   printf("TRIANGULO ACUTANGULO\n");

    if(A == B && B == C)        printf("TRIANGULO EQUILATERO\n");
    else if(A==B || B == C || A == C) printf("TRIANGULO ISOSCELES\n");









    return 0;
}
