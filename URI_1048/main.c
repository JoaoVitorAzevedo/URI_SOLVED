#include <stdio.h>

int main() {


    float sal; float novoSal; int reaj = 0;

    scanf("%f", &sal);

    if(sal >= 0 && sal <= 400) { novoSal = sal * 1.15; reaj = 15;                               }
    else if(sal >= 400.01 && sal <= 800) { novoSal = sal * 1.12; reaj = 12;                     }
    else if(sal >= 800.01 && sal <= 1200.00) { novoSal = sal * 1.10; reaj = 10;                 }
    else if(sal >= 1200.01 && sal <= 2000.00) { novoSal = sal * 1.07; reaj = 7;                 }
    else{ novoSal = sal * 1.04; reaj = 4;                                                       }





    printf("Novo salario: %.2f\n",novoSal);
    printf("Reajuste ganho: %.2f \n", novoSal - sal);
    printf("Em percentual: %d %%\n", reaj);
    return 0;
}
