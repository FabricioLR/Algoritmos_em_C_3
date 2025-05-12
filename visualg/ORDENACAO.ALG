Algoritmo "ordenacao"
Var
   numeros: vetor [1..3] de real
   temporario: real
   index1, index2, index3: inteiro
Inicio
      escreva("Digite o primeiro valor: ")
      leia(numeros[1])
      escreva("Digite o segundo valor: ")
      leia(numeros[2])
      escreva("Digite o terceiro valor: ")
      leia(numeros[3])
      
      escreva("Valores desordenados: ")
      para index1 de 1 ate 3 faca
           escreva(numeros[index1], " ")
      fimpara
      
      para index2 de 1 ate 3 faca
           para index3 de 1 ate 3 - index2 faca
                se (numeros[index3] > numeros[index3 + 1]) entao
                   temporario <- numeros[index3]
                   numeros[index3] <- numeros[index3 + 1]
                   numeros[index3 + 1] <- temporario
                fimse
           fimpara
      fimpara
      
      escreval("")
      escreva("Valores ordenados: ")
      para index1 de 1 ate 3 faca
           escreva(numeros[index1], " ")
      fimpara
Fimalgoritmo