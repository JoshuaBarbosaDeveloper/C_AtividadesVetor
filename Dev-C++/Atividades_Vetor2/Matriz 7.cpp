#include <stdio.h>

int main () {int matriz[6][6]; //Declarar matriz
			 int i, j; //Declarar linha e coluna
			 
			 for (i=1; i<=5; i++){//Varrer linhas
			 					  for (j=1; j<=5; j++){//Varrer colunas
								   					   matriz[i][j]= (i*j)-(i+j);}}//Declarar valor de X(i)(j) sendo como 3*i + j^2
		
			 for (i=1; i<=5; i++){//Varrer linhas
			 					  for (j=1; j<=5; j++){//Varrer colunas
								   					   printf(" %d ", matriz[i][j]);}//Escrever a matriz X(i)(j)
								  printf("\n");}}//Pular a linha
			 
