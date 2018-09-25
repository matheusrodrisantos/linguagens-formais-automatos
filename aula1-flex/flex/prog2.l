%{
#include<stdio.h>
%}

%%
"int"			printf("tipo de variavel inteiro");
"car"			printf("Carro");
[0-9]+			printf("Numero\n");//  essa expressão regular reconhecem todos os números de 0 a infinito 
[a-zA-Z]		printf("Letra\n");//   essa expressao regular reconhecem todas as letras sozinhas 
[a-zA-Z]+		printf("Palavra\n");/*essa expressão reconhecem todas as com maius de um caracter */
[a-zA-Z]+[0-9]+		printf("Variavel");
%%
