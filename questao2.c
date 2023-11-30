#include <stdio.h>
#include <stdlib.h>

int calcular_fatorial(int numero){
    int resultado = 1;
    for(int i = 1; i <= numero; i++ ){
        resultado *= i;
    }
    return resultado;
}

int main(){
    int numero;
    printf("Digite o numero e eu te mostro o seu fatorial: ");
    scanf("%d",&numero);

    int result;
    result = calcular_fatorial(numero);

    printf("\n O fatorial de %d eh: %d",numero,result);

}