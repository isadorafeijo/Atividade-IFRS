#include <string.h>
#include <stdio.h>

int main()
{   
    char nome[100];
    printf("Informe seu nome:", nome);
    gets(nome);
    
    printf("O nome %s ocupa %d caracteres\n",nome, strlen(nome));
    printf("a capacidade da variável é %d caracteres.", sizeof(nome));

    return 0;
}