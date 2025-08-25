#include <stdio.h>

/*
Escreva um algoritmo que leia 3 números inteiros e mostre o maior deles.
*/

int main(){
    int num1, num2, num3;
    
    printf("Digite o primeiro número:");
    scanf("%d", &num1);
    
    printf("Digite o segundo número:");
    scanf("%d", &num2);
    
    printf("Digite o terceiro número:");
    scanf("%d", &num3);
    
    if (num1>num2){
        if (num1>num3) printf("O número %d é o maior", num1);
        else printf("O número %d é o maior", num3);
    }
    else{
        if(num2>num3) printf("O número %d é o maior",num2);
        else printf("O número %d é o maior", num3);
    } 
    

}
