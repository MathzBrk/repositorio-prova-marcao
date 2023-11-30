#include <stdio.h>
#include <stdlib.h>

float funcao_que_calcula(float numero1, float numero2){
    if(numero1 < numero2){
        return numero1 + numero2;
    }else{
        if(numero1 == numero2){
            return numero1 * numero2;
        }else{
            if(numero1 > numero2){
                return numero1 - numero2;
            }
        }
    }
}

int main(){
    float num1, num2;

    printf("Digite o primeiro numero: ");
    scanf("%f",&num1);
    printf("Digite o segundo numero: ");
    scanf("%f",&num2);

    float result;
    result = funcao_que_calcula(num1,num2);

    printf("\nO resultado eh: %.2f",result);
}