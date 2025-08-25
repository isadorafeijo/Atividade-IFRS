#include <stdio.h>

/*
Calcule o IMC. O IMC=peso em kilos dividido pela altura (em metros) ao quadrado.
Leia a altura (em metros) e o peso em kilos de uma pessoa.
calcule o IMC e indique a situação (Abaixo do peso, peso ideal, sobrepeso, obesidade I, II, III)
*/

int main(){
   float peso, altura, imc;
   printf("Digite sua altura (em metros - use .): ");
   scanf("%f",&altura);
   printf("Digite seu peso (em kg): ");
   scanf("%f",&peso);
   
   imc=peso/(altura*altura);
   printf("IMC calculado: %.2f",imc);
   
   if(imc<18.5) printf(" Classificacao: Magreza");
   else if (imc<25) printf(" Classificacao: Normal");
   else if (imc<30) printf(" Classificacao: sobrepeso");
   else if (imc>=30 && imc<=34.99) printf(" Classificacao: Obesidade grau I");
   else if (imc>=35 && imc<40) printf(" Classificacao: Obesidade grau II");
   else if (imc>=40) printf(" Classificacao: Obesidade grau III (obesidade mórbida)");
   else printf("Obesidade Grave");

}
