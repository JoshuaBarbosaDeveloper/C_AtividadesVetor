#include <stdio.h>

int main () {int elemento[10];
			 
			 for(int i=0; i<10; i++) {
			 						  printf("Qual o valor do elemento %d? ", i+1);
			 						  scanf("%d", & elemento[i]);
			 					     }
			 
			 printf("\n Primeira lista: ");
			 
			 for (int i=0; i<10; i++) {
			 						 printf("%d; ", elemento[i]);
			                          }
			
			 printf("\n Segunda lista: ");
			 
			 for (int i=0; i<10; i++) {
			 						   if(elemento[i]<0){
			 						   					 elemento[i]=0;
			 						   				    }
									   printf("%d; ", elemento[i]);
			                          }
		    }
