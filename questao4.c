#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(){
    char nome[30];
    char nomes[30][30];
    int opcao;
    int quantidadeNomes = 0;

    for(int i = 0; i < 30; i++){
        nomes[i][30] = '\0';
    }

    do{
        printf("Digite o primeiro nome: ");
        gets(nome);
        while(getchar() != '\n');

        nomes[quantidadeNomes][30] = nome[quantidadeNomes];
        quantidadeNomes++;

        printf("quer cadastrar um novo nome? Digite 1 para isso");
        scanf("%d",opcao);

    }while(opcao != 1);

    for(int i = 0; i < 30; i++){
        for(int j = 0; j < 30; j++){
            printf("%s",nomes[i][j]);
        }
    }
}