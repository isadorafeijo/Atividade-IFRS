
#include <stdio.h>

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