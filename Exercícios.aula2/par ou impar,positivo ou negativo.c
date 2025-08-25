#include <stdio.h>

/*
Faça um programa que leia um nº inteiro e mostre uma mensagem indicando se este número é par ou ímpar, e se é positivo ou negativo. 
Ex: 'O número 2 é par e é positivo'.
*/

int main(){
    int numero;
    
    printf("Digite um número:");
    scanf("%d", &numero);
    
    if (numero % 2 == 0) printf("O número %d é par,", numero);
    else printf("O número %d é impar,", numero);
   
    if (numero<0) printf("e é negativo!");
    else if (numero>0) printf("e é positivo!");
 
    else printf("e considerado neutro!");

}

