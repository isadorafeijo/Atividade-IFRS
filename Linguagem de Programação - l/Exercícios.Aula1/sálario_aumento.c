#include <stdio.h>

/*
Considerando que o aumento dos funcionários é de 75% do INPC e mais um percentual de produtividade discutido com a empresa. 
Construir um programa que lê o número do funcionário, seu salário atual, o valor do INPC e o índice de produtividade e escreve o número do funcionário, seu aumento e o valor de seu novo salário.
*/

int main()
{   
    int numero_func;
    double salario, valor_inpc, indic_produ, aumento, salario_novo;
    
    printf("Digite o número do funcionário:");
    scanf("%d", &numero_func);
     
    printf("Digite o salário do funcionário:");
    scanf("%lf", &salario);
    
    printf("Digite o valor do INPC (em %%):");
    scanf("%lf", &valor_inpc);
    
    printf("Digite o indice de produtividade (em %%):");
    scanf("%lf", &indic_produ);
    
    aumento=(salario*0.75*valor_inpc/100) + salario*indic_produ/100;
    salario_novo= salario + aumento;
    
    printf("o funcionário do número %d\n", numero_func);
    printf("Teve aumento de: %.2f\n", aumento);
    printf("Seu novo salário é: %.2f", salario_novo);
    
}
