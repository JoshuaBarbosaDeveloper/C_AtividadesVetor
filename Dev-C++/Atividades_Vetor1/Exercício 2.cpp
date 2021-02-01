#include <stdio.h>

int main () {int vetor[6];
			 
			 for (int i=0; i<6; i++){
			 						 printf("Qual o valor desse vetor na posicao %d? ", i);
			 						 scanf("%d", & vetor[i]);
			 					    }
			 
			 printf("\n ---------------------------------- \n");
			 
			 for (int i=0; i<6; i++){
			 						 printf("\n O valor atribuido a posicao %d e de: %d", i, vetor[i]);
			                        }
		    }
