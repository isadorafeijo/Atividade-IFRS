#include <stdio.h>

/*
Leia 04 (quatro) notas de um aluno, a primeira tem peso 1, a segunda peso 2, a terceira peso 3, a quarta peso 4.
Calcule a média e informe se o aluno foi aprovado ou não. 
Usar 'else'. Caso a nota seja menor que 7 ele será reprovado.
*/

int main()
{
    double nota1, nota2, nota3,nota4, media;
    printf("Digite a primeira nota:");
    scanf("%lf", &nota1);
    printf("Digite a segunda nota:");
    scanf("%lf", &nota2);
    printf("Digite a terceira nota:");
    scanf("%lf", &nota3);
    printf("Digite a quarta nota:");
    scanf("%lf", &nota4);
    
    media=(nota1*1+nota2*2+nota3*3+nota4*4)/10;
    
    if (media >=7){
        printf("\nAprovado");
    }
    else {
        printf("\nReprovado");
    }

};
