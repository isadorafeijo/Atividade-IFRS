/******************************************************************************
O cardápio de uma lancheria é o seguinte:
Código do lanche | Especificação   | Preço unitário
100              | Cachorro quente | 5.00
101              | Bauru simples   | 6.00
102              | Bauru c/ovo     | 8.00
103              | Hamburger       | 5.00
104              | Cheeseburger    | 7.50
105              | Refrigerante    | 2.00
Escrever um programa que leia o código do item pedido, a quantidade e calcule o valor a ser pago por aquele lanche.

Considere que a cada execução somente será calculado um item.
*******************************************************************************/

#include <stdio.h>

int main()
{
    int codigo, quantidade;
    double valor, preco;
    char lanche[20];
    
    printf("CARDÁPIO:\n");
    printf("Código | Especificação    | Preço unitário\n");
    printf("100    | Cachorro quente  | R$ 5.00\n");
    printf("101    | Bauru simples    | R$ 6.00\n");
    printf("102    | Bauru c/ ovo     | R$ 8.00\n");
    printf("103    | Hamburger        | R$ 5.00\n");
    printf("104    | Cheeseburger     | R$ 7.50\n");
    printf("105    | Refrigerante     | R$ 2.00\n\n");
    
    printf("Indique o código do seu pedido:");
    scanf("%d", &codigo);
    
   
    if (codigo < 100 || codigo > 105) printf("Número Inválido, Digite corretamente!");
    
    else {
        if (codigo == 100){
        strcpy(lanche, "Cachorro quente");
        preco = 5;
        }
        
        else if  (codigo == 101){
        strcpy(lanche, "Bauru simples");
        preco = 6;
        }
        
        else if  (codigo == 102){
        strcpy(lanche, "Bauru c/ ovo");
        preco = 8;
        }
    
        else if  (codigo == 103){
        strcpy(lanche, "Hamburger");
        preco = 5;
        }
        
        else if  (codigo == 104){
        strcpy(lanche, "Cheeseburger");
        preco = 7.50;
        }
        
        else if  (codigo == 105){
        strcpy(lanche, "Refrigerante");
        preco = 2;
        }
     
        
        printf("Indique a quantidade do produto:");
        scanf("%d", &quantidade);
        
        valor=preco*quantidade;
    
        printf("\nPedido: %d unidades de %s", quantidade, lanche);
        printf("\nValor total: R$ %2.lf", valor);
    }
    
    return 0;
}