#include <stdio.h>

int main () {int vetor[6]={1, 0, 5, -2, -5, 7};
			 int result;
			 
			 result=vetor[0]+vetor[1]+vetor[5];
			 
			 printf ("A soma dos valores que estao na posicao 0, 1 e 5 nesse vetor e de: %d \n", result);
			 
			 vetor[4]=100;
			 
			 for (int i=0; i<6; i++) printf("\n O valor na posicao %d e de: %d", i, vetor[i]);}
