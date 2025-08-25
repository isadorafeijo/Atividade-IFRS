#include <stdio.h>

/*
Escreva um programa que lê dois numeros e imprima o resultado da soma dos dois numeros.
*/

int main()
{
    int numero1, numero2, soma;
    
    printf("digite o primeiro número:");
    scanf("%d", &numero1);
   
    printf("digite o segundo número:");
    scanf("%d", &numero2);
    
    soma=numero1 + numero2;
    
    printf("o resultado da soma é: %d", soma);
}
