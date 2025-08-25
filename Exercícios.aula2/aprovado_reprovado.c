#include <stdio.h>

/*
Leia 03 (três) notas de um aluno, calcule sua média.
Caso a média seja menor que 7 ele será reprovado.
Apresente a média calculada e a situação (aprovado ou reprovado). 
*/

int main()
{
    double nota1, nota2, nota3, media;
    printf("Digite a primeira nota:");
    scanf("%lf", &nota1);
    printf("Digite a segunda nota:");
    scanf("%lf", &nota2);
    printf("Digite a terceira nota:");
    scanf("%lf", &nota3);
    
    media=(nota1 + nota2 + nota3)/3;
    
    if (media > 7){
        printf("\nSua média é:%2.lf", media);
        printf("\nAprovado");
    }
    if (media == 7){
        printf("\nSua média é: %2.lf", media);
        printf("\nAprovado");
    }
    if(media < 7){
        printf("\nSua média é:%2.lf", media);
        printf("\nReprovado");
    }
    
}
