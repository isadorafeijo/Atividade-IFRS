#include <stdio.h>

/* 
Escreva um programa que, dada a idade de um nadador, classifique-o em uma das seguintes categorias:
infantil A = 5 - 7 anos
infantil B = 8-10 anos
juvenil A = 11-13 anos
juvenil B = 14-17 anos
adulto = 18 anos ou mais
*/

int main()
{
    int idade;
    
    printf("Informe sua idade:");
    scanf("%d", &idade);
    
    if(idade < 5) {
        printf("Sua idade não se encaixa em nunhuma categoria.");
    }
    
    else if (idade>=5 && idade<=7) {
        printf("Sua categoria é infantil A.");
    }
            
    else if (idade>=8 && idade<=10){
        printf("Sua categoria é infantil B.");
    }
                
    else if (idade>=11 && idade<=13){
        printf("Sua categoria é juvenil A.");
    }
                
    else if (idade>=14 && idade<=17){
        printf("Sua categoria é juvenil B.");
            }
    
    else {
        printf("Sua categoria é adulto.");
     }

    return 0;
}
