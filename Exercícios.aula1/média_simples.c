#include <stdio.h>
// Escreva um programa que leia 3 notas, calcule a média simples e escreva na tela.
int main() {
    int numero1, numero2, numero3;
    float media; // armazena número com casa decimal

    printf("digite o primeiro numero: ");
    scanf("%d", &numero1);

    printf("digite o segundo numero: ");
    scanf("%d", &numero2);

    printf("digite o terceiro numero: ");
    scanf("%d", &numero3);

    media = (numero1 + numero2 + numero3) / 3.0;
    printf("o resultado da media e: %.2f\n", media);  
    return 0;
}

