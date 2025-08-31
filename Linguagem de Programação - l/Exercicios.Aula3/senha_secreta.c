#include <string.h>
#include <stdio.h>
// escreva um programa que cria uma string, peça para o usuário digitar uma palavra. se a palavra digitada for "senha secreta", escreva a mensagem: "senha correta", senão escreva "senha incorreta". usar strcmp para comparar. combinar com sentença if/else. 
int main()
{   
    char senha[100];
    printf("Digite a senha de duas palavra:", senha);
    gets(senha);
    
    if (strcmp(senha, "senha secreta") == 0) printf("Senha Correta!", senha);
    else 
    printf("Senha Incorreta!");
    return 0;
}