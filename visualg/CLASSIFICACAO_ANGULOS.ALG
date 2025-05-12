Algoritmo "classificacao_angulos"
Var
   ang1, ang2, ang3, soma: real
Inicio
      escreva("Digite o valor do primeiro angulo: ")
      leia(ang1)
      escreva("Digite o valor do segundo angulo: ")
      leia(ang2)
      escreva("Digite o valor do terceiro angulo: ")
      leia(ang3)
      
      soma <- ang1 + ang2 + ang3
      
      se soma = 180 entao
         se (ang1 < 90) e (ang2 < 90) e (ang3 < 90) entao
              escreval("Seu triangulo e acutangulo\")
         senao
              se (ang1 = 90) ou (ang2 = 90) ou (ang3 = 90) entao
                 escreval("Seu triangulo e retangulo")
              senao
                 escreval("Seu triangulo e obtusangulo")
              fimse
         fimse
      senao
           escreval("Angulos invalidos")
      fimse
Fimalgoritmo