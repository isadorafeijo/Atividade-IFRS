#include <stdio.h>

/*
Desenvolva um programa que faça a conversão de um valor lido em dólares para um valor em reias. 
O usuário deve informar a quantidade em dólares e a cotação do dólar no dia.
*/

int main()
{   
    float valor, cotacao, conta;
    
    printf("Digite o valor em dólar que deseja converter para reais:");
    scanf("%f", &valor);
     
    printf("Digite a cotação do dolar hoje:");
    scanf("%f", &cotacao);
    
    conta=valor*cotacao;
    
    printf("o valor em reis é: %.2f", conta);
    
}
