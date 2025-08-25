#include <stdio.h>

/*
Escreva um programa que lê três numeros e imprima o resultado da multiplicação.
*/

int main()
{
    float numero1, numero2, numero3, multiplicacao;
    
    printf("digite o primeiro número:");
    scanf("%f", &numero1);
   
    printf("digite o segundo número:");
    scanf("%f", &numero2);
     
    printf("digite o terceiro número:");
    scanf("%f", &numero3);
    
    multiplicacao=numero1 * numero2 * numero3;
    
    printf("o resultado da multiplicacao é: %.2f", multiplicacao);
}
