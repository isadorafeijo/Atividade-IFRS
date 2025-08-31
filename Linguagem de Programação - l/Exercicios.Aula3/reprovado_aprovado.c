/******************************************************************************

Faça um programa que leia as notas de 2 provas e um trabalho e o numero de faltas. 
Calcule a média aritmética. E indique o conceito: 

A para (8.0 a 10),
B para (7.0 a 7.9),
C para (6.0 a 6.9),
D para (0.0 a 5.9)
E para reprovado por faltas. Maior ou igual a 5.
Escreva "Reprovado" ou "Aprovado".

*******************************************************************************/
#include <stdio.h>
#include <string.h>

int main()
{   
    double n1,n2,t1,media;
    int faltas;
    char notafinal;
    char aprovacao[10];
    
    printf("Digite a primeira nota:");
    scanf("%lf", &n1);
    
    printf("Digite a segunda nota:");
    scanf("%lf", &n2);
    
    printf("Digite a nota do trabalho:");
    scanf("%lf", &t1);
    
    printf("Digite o número de faltas:");
    scanf("%d", &faltas);
    
    media= (n1+n2+t1) / 3;
    
    if (faltas >= 5) { 
        notafinal ='E';
        strcpy(aprovacao, "Reprovado");
    } else {
         
        if (media>=8 && media<=10) {
            notafinal = 'A';
        }
        else if (media>=7 && media<8) {
            notafinal = 'B';
        }
    
        else if (media>=6 && media<7) {
            notafinal = 'C';
        }
    
        else {
            notafinal = 'D';
        }
    
        if (notafinal =='A' || notafinal =='B' || notafinal =='C') {
            strcpy(aprovacao, "Aprovado");
        
        } else {
            strcpy(aprovacao, "Reprovado");
        } 
    }
 
    printf("O conceito do aluno foi %c, a media é %.2lf e o número de faltas foi %d, logo está %s!", notafinal, media, faltas, aprovacao);
 
    return 0;
}    
