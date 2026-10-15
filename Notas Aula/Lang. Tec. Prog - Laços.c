#include <stdio.h>
#include <stdlib.h>

/* Lista de Exercicios */

int main(int argc, char *argv[]) {
	int i, j, k, n, r; 
		
	// vamos relembrar algumas estruturas que vimos essa semana
	
	/*Laço for repete um conjunto de instruções, de um valor
		inicial (inicialização), até uma detrminada condição, 
		realizando uma operação (incremento) a cada execução [sempre]
	*/
	for(i=0, j=1; i<10; i++, j--){
		printf("esse é o laco FOR");
	}
	
	/*Laço WHILE (enquanto), que testa se uma condição é verdadeira,
	caso seja executa um bloco de comandos repetindo o processo
	enquanto a condição for avaliada com verdadeira.*/
	
	while (i<10){
		printf("%d, laco WHILE", i).
		if(n%2 == 0) i++;
		n++; 
	}
	
	
	/* Laco DO WHILE,  semelhante ao laço while, porém antes de 
	realizar a verficação ele executa o conjunto de instruções para
	após a execução realizar a verificação da condição*/
	do{
		printf("%d, laco DO", i).
		if(n%2 == 0) i++;
		n++; 
	}	while (i<10); 
	
	
	
	//Exercicio 1;
	/*Elabore um programa que permita a entrada de 3 valores. 
	E conte do primeiro valor inserido, até o segundo valor, com o
	passo da contagem dado pelo terceiro valor  */
	//ex: 1,8,2 >> contar de 1 a 8, com passo 2 = 3,5,7.
	
	// Exercicio 2;
	/* Faça um programa que recaba um nuumero n e realize a soma dos
	n primeiros termos da sequência definda como: 
	[S = 1/2; 1/4; 1/8 1/16... N] */

	// Exercicio 3;
	/*Crie um programa qe exiba na tela, o trîangulo de pascal. */
	return 0;
}
