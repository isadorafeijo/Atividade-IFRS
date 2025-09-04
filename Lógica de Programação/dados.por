programa
{
	
	funcao inicio()
	{
		caracter genero
		cadeia nome, sobrenome
		inteiro idade
		real sal
		
		escreva("Qual é o seu nome?")
		leia(nome)
		escreva("Qual é o seu sobrenome?")
		leia(sobrenome)
		escreva("Qual é o seu gênero(F- feminino /M- masculino)? ")
		leia(genero)
		escreva("Qual é a sua idade?")
		leia(idade)
	     escreva("Infome seu salário:")
		leia(sal)

		limpa()
		
		escreva(nome, " ", sobrenome, " ")
		escreva("\nidade:", idade, "\n")
		 
		 escolha (genero){
			caso 'f':
				escreva("Genero :Feminino\n")
				pare
			caso 'm':
				escreva("Genero: Masculino\n")
				pare
		}
		
		se (sal >= 5000)
		{
			escreva("Sálario acima da média\n")
		} senao  
			escreva("Sálario abaixo da média\n") 
		
		
		
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 55; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */