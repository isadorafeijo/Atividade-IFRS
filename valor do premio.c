
#include <stdio.h>

int main()
{   
    double preco_uni, total, premio;
    int quantidade;
    
    printf("Digite o valor do produto:");
    scanf("%lf", &preco_uni);
     
    printf("Digite a quantidade de produto:");
    scanf("%d", &quantidade);
    
    total=preco_uni*quantidade;
    premio=total*2;
    
    printf("o valor total gasto é: %.2f\n", total);
    printf("o valor do premio é: %.2f", premio);
    
}