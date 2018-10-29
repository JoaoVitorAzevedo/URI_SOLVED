#include <stdio.h>
#include <stdlib.h>

int main()
{

    /* Leia um valor inteiro. A seguir, calcule o menor n�mero de notas poss�veis (c�dulas) no qual o valor pode ser decomposto.
     As notas consideradas s�o de 100, 50, 20, 10, 5, 2 e 1. A seguir mostre o valor lido e a rela��o de notas necess�rias.
     Entrada
    O arquivo de entrada cont�m um valor inteiro N (0 < N < 1000000).

Sa�da
Imprima o valor lido e, em seguida, a quantidade m�nima de notas de cada tipo necess�rias,
conforme o exemplo fornecido. N�o esque�a de imprimir o fim de linha ap�s cada linha, caso contr�rio seu programa
 apresentar� a mensagem: �Presentation Error�. */

    int N;
    scanf("%d", &N);

    int hundred = 0, vinte = 0, cinquenta = 0, dez = 0, cinco = 0, dois = 0, um = 0;
    hundred = (N / 100);
    cinquenta = (N - (hundred * 100)) / 50;
    vinte = (N - (hundred * 100 + cinquenta * 50 )) / 20;
    dez = (N - (hundred * 100 + cinquenta * 50 + 20 * vinte ))  / 10;
    cinco = (N - (hundred * 100 + cinquenta * 50 + 20 * vinte + 10 * dez)) / 5;
    dois = (N - (hundred * 100 + cinquenta * 50 + 20 * vinte + 10 * dez + 5 * cinco)) / 2;
    um = N - (hundred * 100 + cinquenta * 50 + 20 * vinte + 10 * dez + 5 * cinco + dois * 2);

    printf("%d\n",N);
    printf("%d nota(s) de R$ 100,00\n",  hundred);
    printf("%d nota(s) de R$ 50,00\n",   cinquenta);
    printf("%d nota(s) de R$ 20,00\n",   vinte);
    printf("%d nota(s) de R$ 10,00\n",   dez);
    printf("%d nota(s) de R$ 5,00\n",    cinco);
    printf("%d nota(s) de R$ 2,00\n",    dois);
    printf("%d nota(s) de R$ 1,00\n",    um);




    return 0;
}
