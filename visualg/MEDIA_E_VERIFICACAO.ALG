Algoritmo "media_e_verificacao"
Var
   nota1, nota2, nota3, nota4: real
   media: real
Inicio
      escreva("Digite a primeira nota: ")
      leia(nota1)
      escreva("Digite a segunda nota: ")
      leia(nota2)
      escreva("Digite a terceira nota: ")
      leia(nota3)
      escreva("Digite a quarta nota: ")
      leia(nota4)
      
      media <- (nota1 + nota2 + nota3 + nota4) / 4
      
      se media >= 7 entao
         escreval("Aprovado com media ", media)
      senao
         escreval("Reprovado com media ", media)
      fimse
Fimalgoritmo