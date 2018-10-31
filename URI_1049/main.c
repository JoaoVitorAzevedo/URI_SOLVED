#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

    char vet1[15], vet2[15], vet3[15];

    scanf("%s %s %s", vet1,vet2,vet3);

    if(strcmp(vet1,"vertebrado") == 0){
            if(strcmp(vet2,"ave") == 0) {
                if(strcmp(vet3,"carnivoro") == 0){
                        printf("aguia\n");
                }
                else{printf("pomba\n");}
            }
            if(strcmp(vet2,"mamifero") == 0){
                    if(strcmp(vet3,"onivoro") == 0){
                            printf("homem\n");

                    }
                    else{printf("vaca\n");}

            }

    }
    else{
        if(strcmp(vet2,"inseto") == 0){
                if(strcmp(vet3,"hematofago") == 0){
                    printf("pulga\n");
                } else{ printf("lagarta\n");}
    }
    else{
             if(strcmp(vet3,"hematofago") == 0)
                    printf("sanguessuga\n");
                    else{
            printf("minhoca\n");

    }

    }






    return 0;
} }
