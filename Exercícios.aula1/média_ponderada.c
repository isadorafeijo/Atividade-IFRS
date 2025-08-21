#include <stdio.h>
//Escreva um programa que leia 4 notas: a primeira com peso 1, a segunda com peso 2, a terceira com peso 3, a quarta com peso 4. Leia as 4 notas e cacule a média e escreva na tela.
Media = (N1*1+N2*2+N3*3+N4*4)/(1+2+3+4) 
int main() {
    float nota1, nota2, nota3, nota4;
    float media; // armazena número com casa decimal

    printf("digite a primeira nota: ");
    scanf("%f", &nota1);

    printf("digite a segunda nota: ");
    scanf("%f", &nota2);

    printf("digite a terceira nota: ");
    scanf("%f", &nota3);
    
    printf("digite a quarta nota:");
    scanf("%f", &nota4);
    
    media = (nota1 *1 + nota2 *2 + nota3 *3 + nota4 *4) / 10.0;
    printf("o resultado da media e: %.2f\n", media);  
    return 0;
}

