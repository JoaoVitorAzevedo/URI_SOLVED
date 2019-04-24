#include <iostream>
#include <stdio.h>
#include <stack>
#include <map>
#include <cstdio>


using namespace std;




/* Dona Parcinova costuma ir regularmente à feira para comprar frutas e legumes. Ela pediu então à sua filha, 
Mangojata, que a ajudasse com as contas e que fizesse um programa que calculasse o valor que precisa levar para poder comprar tudo que está em sua
lista de compras, considerando a quantidade de cada tipo de fruta ou legume e os preços destes itens.
Entrada
A primeira linha de entrada contém um inteiro N que indica a quantidade de idas à feira de dona Parcinova (que nada mais é do que o número 
de casos de teste que vem a seguir). Cada caso de teste inicia com um inteiro M que indica a quantidade de produtos que estão disponíveis para venda
na feira. Seguem os M produtos com seus preços respectivos por unidade ou Kg. A próxima linha de entrada contém um inteiro P (1 ≤ P ≤ M) que indica a
quantidade de diferentes produtos que dona Parcinova deseja comprar. Seguem P linhas contendo cada uma delas um texto (com até 50 caracteres) e um valor 
inteiro, que indicam respectivamente o nome de cada produto e a quantidade deste produto.
Saída
Para cada caso de teste, imprima o valor que será gasto por dona Parcinova no seguinte formato: R$ seguido de um espaço e seguido do valor, com 2 casas decimais, 
conforme o exemplo abaixo.
 */
 
int main()
{  
    char produto[50]; float preco; int P; int qtd;
    
    int N,M;
    scanf("%d", &N);
    map <string,float> compras; float valor = 0;
   
    while(N){
        valor = 0;
        scanf("%d",&M);
        while(M){
           
          // getline(cin,produto);
           scanf("%s",produto);
           scanf("%f", &preco);
           
           fflush(stdin);
           
           compras[produto] = preco;
           
           
           

          M--;
        }
        
        scanf("%d", &P);
        
        while(P){
               scanf("%s", produto);
               scanf("%d", &qtd);
               
               valor += compras[produto] * qtd;
              
               P--;
           }
           
           
           printf("R$ %.2f\n", valor);
           
           
        
        
        
        N--;
    }
   
   
   
 
    return 0;
}
