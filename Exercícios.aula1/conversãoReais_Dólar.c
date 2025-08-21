#include <stdio.h>
//Desenvolva um programa que faça a conversão de um valor lido em reais para um valor em dólares. O usuário deve informar a quantidade em reais e a cotação do dólar no dia.
int main()
{   
    float valor, cotacao, conta;
    
    printf("Digite o valor em reais que deseja converter para dólar:");
    scanf("%f", &valor);
     
    printf("Digite a cotação do dolar hoje:");
    scanf("%f", &cotacao);
    
    conta=valor/cotacao;
    
    printf("o valor em dólar é: %.2f", conta);
    
}
