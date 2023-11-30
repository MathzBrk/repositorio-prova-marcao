#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int verificarPalindromo(char string1[]){
    int tamanho1 = strlen(string1);
    char novaString[30];
    printf("\n%d",tamanho1);

    for(int i = tamanho1; i >= 0; i-- ){
        for(int j = 0; j < tamanho1; j++){
            novaString[j] = string1[i];
        }
    }

    printf("\n%s",string1);
    printf("\n%s",novaString);
    if(strcmp(string1,novaString) == 0)
    return 1;
    else
    return 0;

}




int main(){
    char string1[30];


    for(int i = 0; i < 30; i ++){
        string1[i] = '\0';
    }

    printf("Digite a string para ver se ela eh palindromo ou nao: ");
    gets(string1);
    while(getchar() != '\n');

    int result;
    result = verificarPalindromo(string1);

    if(result == 1){
        printf("\nEh palindromo");
    }else{
        printf("\nNao eh palindromo");
    }

    


}