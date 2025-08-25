
#include <stdio.h>

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