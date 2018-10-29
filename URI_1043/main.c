#include <stdio.h>
#include <stdlib.h>

int main()
{
        /* Leia 3 valores reais (A, B e C) e verifique se eles formam ou não
        um triângulo. Em caso positivo, calcule o perímetro do triângulo e
        apresente a mensagem:
    Perimetro = XX.X
    Em caso negativo, calcule a área do trapézio que tem A e B como base e C
    como altura, mostrando a mensagem
    Area = XX.X
    Entrada
    A entrada contém três valores reais.
    Saída
    O resultado deve ser apresentado com uma casa decimal. */

    double A,B,C;
    scanf("%lf %lf %lf", &A,&B,&C);
    if(A >= (B+C) || B >= (A+C) || C >= (A+B)) {
     double Area = .5*(A+B)*C;
        printf("Area = %.1f\n",Area);
    }

    else{
        printf("Perimetro = %.1lf\n", A + B + C);

    }
    return 0;
}
