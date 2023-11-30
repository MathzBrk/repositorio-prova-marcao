#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int calcular_tamanho_entre_string(char string1[], char string2[]){
    int tamanho1 = strlen(string1);
    int tamanho2 = strlen(string2);
    int tamanho_medio1 = 0;
    int tamanho_medio2 = 0;

    for(int i = 0; i <30 ; i++){
        if(string1[i] != '\0'){
        tamanho_medio1 = i + 1;
        }
    }


     for(int i = 0; i < tamanho2; i++){
        if(string2[i] != '\0'){
        tamanho_medio2 = i + 1;
        }
    }
    
    printf("\nNa primeira string ha: %d caracteres",tamanho_medio1);
    printf("\nNa segunda string ha: %d caracteres",tamanho_medio2);
    int result = (tamanho_medio1 + tamanho_medio2)/ 2;
    return result;
}

int main(){

    char string_1[30];
    char string_2[30];
    int result;

    for(int i = 0; i < 30; i ++){
        string_1[i] = '\0';
    }

    for(int i = 0; i < 30; i ++){
        string_2[i] = '\0';
    }

    printf("Digite a string 1: ");
    gets(string_1);
    while(getchar() != '\n');

    printf("Digite a string 2: ");
    gets(string_2);
    while(getchar() != '\n');

    printf("\n%s",string_1);
    printf("\n%s",string_2);

    result = calcular_tamanho_entre_string(string_1,string_2);

    printf("\nO tamanho media entre as duas strings eh de: %d caracteres",result);
}