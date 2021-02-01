#include <stdio.h>

int main () {int matriz[3][3]; //Declarar matriz
			 int i, j; //Declarar linha e coluna
			 
			 for (i=0; i<=2; i++){//Varrer linhas
			 					  for (j=0; j<=2; j++){//Varrer colunas
								   					   matriz[i][j]= i+j;}}//Declarar valor de X(i)(j)
		
			 for (i=0; i<=2; i++){//Varrer linhas
			 					  for (j=0; j<=2; j++){//Varrer colunas
								   					   printf("%d ", matriz[i][j]);}//Escrever a matriz X(i)(j)
								  printf("\n");}}//Pular a linha
			 
			 
			 
			 
			 
			 
			 
			 

