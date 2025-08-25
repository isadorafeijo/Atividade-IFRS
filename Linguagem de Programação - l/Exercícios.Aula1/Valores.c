#include <stdio.h>

/*
A Joalheria Silva está fazendo aniversário e resolveu premiar o primeiro cliente do dia devolvendo a ele o valor da compra em dobro.
Faça um programa que leia o preço unitário do produto adquirido pelo cliente, a quantidade e calcule o total gasto pelo cliente. 
Mostre o total e calcule o prêmio. Mostre o valor do prêmio (total da compra multiplicado por 2)
*/

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
