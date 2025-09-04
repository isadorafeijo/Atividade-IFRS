programa {
  funcao inicio() {
    //Algoritmo que leia a idade dos 11 jogadores do time de futebol XYZ e ao final informe a média de idade do time.
    inteiro idade, cont=1, media=0
    

    enquanto(cont<=11){
    escreva("Informe sua idade:")
    leia(idade)
    cont++   
    media= (media+idade)/2
    }
    escreva("A média de idade do time é:", media)
  }
  
}
 
