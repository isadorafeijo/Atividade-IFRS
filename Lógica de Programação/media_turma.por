programa
{
	
	funcao inicio()
	{
		cadeia nome
		real n1,n2,media, media_g=0
		inteiro cont=0

		enquanto (cont<2){
		escreva("Informe o seu nome:")
		leia(nome)
		escreva("Informe a primeira nota:")
		leia(n1)
		escreva("Informe a segunda nota:")
		leia(n2)

		media = (n1+n2)/2
		se (media>=7) {
		escreva(nome, " ficou com média: ", media, " Aprovado!\n")}
		senao 
		escreva(nome, " ficou com média:", media, " Reprovado!\n")  
		cont++
		media_g= media_g + media
		}
		escreva("	A média geral da turma é ", media_g/2, "\n")
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 393; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */