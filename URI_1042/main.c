#include <stdio.h>
#include <stdlib.h>

int main()
{
       /*  Leia 3 valores inteiros e ordene-os em ordem crescente. No final, mostre os valores em ordem crescente,
       uma linha em branco e em seguida, os valores na sequência como foram lidos.

    Entrada
    A entrada contem três números inteiros.

    Saída
    Imprima a saída conforme foi especificado. */
        int v1,v2,v3;
        scanf("%d %d %d",&v1,&v2,&v3);
                    /*        1  2  3
                           1  3  2
                           2  1  3
                           2  3  1
                           3  1  2
                           3  2  1 */


        if(v1<v2 && v2<v3 &&v1<v3)        printf("%d\n%d\n%d\n", v1,v2,v3);
   else if(v1 < v2 && v2 > v3 && v3 > v1) printf("%d\n %d\n%d\n", v1,v3,v2);
   else if(v1 > v2 && v2 < v3 && v3 > v1) printf("%d\n%d\n%d\n", v2,v1,v3);
   else if(v1 < v2 && v2 > v3 && v3 < v1) printf("%d\n%d\n%d\n", v3,v1,v2);
   else if(v1 > v2 && v2 < v3 && v3 < v1) printf("%d\n%d\n%d\n", v2,v3,v1);
   else if(v1 > v2 && v2 > v3 && v3 < v1) printf("%d\n%d\n%d\n", v3,v2,v1);



        printf("\n%d\n%d\n%d\n", v1,v2,v3);



        return 0;




   }
