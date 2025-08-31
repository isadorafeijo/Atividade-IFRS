/******************************************************************************
Escreva um programa que:
 - leia duas strings;
 - compare as duas: informe se as duas são iguais ou diferentes entre si;
 - indique a capacidade de cada variável string
 - informe o espaço usado pelo conteúdo em cada string.
 - Concatenar as duas strings.
 - Antes de concatenar verifique se a string de destino tem espaço suficiente para a concatenação,
 caso o espaço não seja suficiente, escreva uma mensagem de erro.

*******************************************************************************/

#include <stdio.h>

int main()
{  
    char s1[50]; // primeira string
    char s2[50]; // segunda string
    size_t capacidade_s1 = sizeof(s1); // capacidade total
    size_t capacidade_s2 = sizeof(s2);
    size_t tamanho_s1, tamanho_s2; // espaço usado (strlen)
    
    printf("Digite a primeira string:");
    gets(s1);
    
    printf("Digite a segunda string:");
    gets(s2);
    
    if (strcmp(s1,s2) == 0){ 
        printf("As string são iguais\n");
    } else {
        printf("As strings são diferentes\n");
        }
    
    //mostrar capacidade:
    printf("capacidade em s1: %zu\n", capacidade_s1);
    printf("capacidade em s2: %zu\n", capacidade_s2);
    
    //mostrar espaço usado
    tamanho_s1 = strlen(s1); 
    tamanho_s2 = strlen(s2);
    printf("Espaço usado em s1: %zu\n", tamanho_s1);
    printf("Espaço usado em s2: %zu\n", tamanho_s2);
    
    //verificar se tem espaço para concatenar
    if (tamanho_s1 + tamanho_s2 + 1 <= capacidade_s1) {
        strcat(s1, s2);
        printf("Concatenação realizada: %s\n", s1);
    } else {
        printf("Erro: espaço insuficiente para concatenar\n");
    }

    return 0;
}