#include <stdio.h>

int main () {int vetor[10]={12, 45, 123, 764, 123, 51, 23, 51, 12, 52,};
			 int result;
			 
			 for(int i=0; i<10; i++){
			 						 if(vetor[i]%2==0) {
									                    result=result+1; 
														printf("\n O vetor na posicao %d e par! (%d)", i, vetor[i]);
													   }
			 					    }
			 printf("\n");
			 printf("\n A quantidade total de numeros pares desse vetor e de: %d", result);
		    }
