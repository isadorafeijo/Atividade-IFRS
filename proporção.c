
#include <stdio.h>

int main()
{   
    double salario1, salario2, proporcao1, proporcao2, valor_conta;
    
    printf("Digite o salário da primeira pessoa:");
    scanf("%lf", &salario1);
     
    printf("Digite o salário da segunda pessoa:");
    scanf("%lf", &salario2);
    
    printf("Digite o valor da conta:");
    scanf("%lf", &valor_conta);
    
    proporcao1=salario1/(salario1+salario2);
    proporcao2=salario2/(salario1+salario2);
    
    printf("a primeira pessoa deve pagar: %.2f\n", proporcao1*valor_conta);
    printf("a segunda pessoa deve pagar: %.2f", proporcao2*valor_conta);
    
}