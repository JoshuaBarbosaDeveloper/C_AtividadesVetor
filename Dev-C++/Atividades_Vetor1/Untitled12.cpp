#include <stdio.h>

int main () {int vetor1[4]={2, 2, 5, 6};
			 int vetor2[6]={1, 3, 5, 6, 7, 8};
			 int resultado;
			 
			 for(int i=0; i<4; i++) {
			 						 
									         			      if (vetor1[i]==vetor2[i]) resultado=resultado+1;
									         			     
		                            }
		                            
			 printf("O numero de elementos iguais desses 2 vetores e de: %d", resultado);
		    }
