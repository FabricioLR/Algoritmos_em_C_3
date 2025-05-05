C_SOURCE=$(wildcard *.c)
C_EXE = $(C_SOURCE:.c=.exe)

%.exe: %.c
	gcc -o $@ $<

media: media_e_verificacao.exe
	./$<

senha: validacao_senha.exe
	./$<

inteiros: comparar_inteiros.exe
	./$<

troca: troca_variaveis.exe
	./$<

ordenar: ordenacao.exe
	./$<

lados: classificacao_lados.exe
	./$<

angulos: classificacao_angulos.exe
	./$<

clean: $(C_EXE)
	$(RM) $^