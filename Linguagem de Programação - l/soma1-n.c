int main() {
    //soma de 1 até n
    
    int num,resultado=0,i;
    
    printf("Digite um número:");
    scanf("%d", &num);
    
    if (num < 1){
    printf("\n valor inválido");
    } else{
        for(i=1; i<=num; i++) {
        resultado += i;
        }
        printf("A soma de 1 até %d = %d \n", num, resultado);
    } 
}