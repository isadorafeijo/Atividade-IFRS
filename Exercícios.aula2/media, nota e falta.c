#include <stdio.h>

/*
Faça um programa que leia a média do aluno e seu numero de faltas.
se as faltas forem maior ou igual a 5, escreva 'reprovado por faltas'.
Se a média for menor que 7, foi reprovado por média. 
Senão, escreva 'Parabéns! você foi aprovado'.
*/

int main()
{
    double nota1, nota2, media;
    int faltas;
    
    printf("Digite a primera nota:");
    scanf("%lf", &nota1);
   
    printf("Digite a segunda nota:");
    scanf("%lf", &nota2);
    
    printf("Quantas faltas você tem:");
    scanf("%d", &faltas);
    
    media = (nota1+nota2)/2;
    
    if (media < 7){
        printf("\nReprovado por média");
    }
    
    else if (faltas >= 5){
        printf("\nReprovado por falta");
    }
    else {
        printf("Prabéns!Você foi aprovado.");
    }
    return 0;
};
