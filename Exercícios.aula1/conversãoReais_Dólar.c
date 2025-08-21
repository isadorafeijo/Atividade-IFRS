
#include <stdio.h>

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