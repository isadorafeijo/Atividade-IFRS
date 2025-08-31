/*Escreva um programa que leia o nome e a idade do usuário e retorne
  uma mensagem indicando se o usuário é maior de idade ou não. 
  Vamos considerar 18 anos completos.
 
  Ex: "FULANO é maior de idade" ou "FULANO é Menor de idade"
*/

#include <stdio.h>
#include <string.h>

int main()
{   
    char nome[100];
    int idade;
    
    printf("Qual é o seu nome:");
    gets(nome);
    
    printf("Indique sua idade:");
    scanf("%d", &idade);
    
    if (idade > 17) printf("%s é maior de idade!", nome);
    else printf("%s é menor de idade", nome);
    
    return 0;
}