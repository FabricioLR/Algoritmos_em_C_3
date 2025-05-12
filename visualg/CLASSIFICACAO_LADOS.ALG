Algoritmo "classificacao_lados"
Var
   lado1, lado2, lado3: real
   soma1, soma2, soma3: real
Inicio
      escreva("Digite o valor do primeiro lado: ")
      leia(lado1)
      escreva("Digite o valor do segundo lado: ")
      leia(lado2)
      escreva("Digite o valor do terceiro lado: ")
      leia(lado3)

      soma1 <- lado1 + lado2
      soma2 <- lado1 + lado3
      soma3 <- lado2 + lado3
      
      se (soma1 > lado3) ou (soma2 > lado2) ou (soma3 > lado1) entao
         se (lado1 = lado2) e (lado1 = lado3) entao
            escreval("Seu triangulo e equilatero")
         senao
            se (lado1 <> lado2) e (lado1 <> lado3) e (lado2 <> lado3) entao
               escreval("Seu triangulo e escaleno")
            senao
               escreval("Seu triangulo e isosceles")
            fimse
         fimse
      senao
           escreval("Triangulo nao existe. Informe outros valores")
      fimse
Fimalgoritmo