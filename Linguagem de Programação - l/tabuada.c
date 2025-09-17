int main() {
    //tabuada simples
    
    int num,resultado,i;
    
    printf("Digite um número para ver a tabuada:");
    scanf("%d", &num);
    
    for(i=1; i<=10; i++){
        resultado= num * i;
        printf("\n%d X %d = %d ", num, i, resultado);
        
    }
    
}