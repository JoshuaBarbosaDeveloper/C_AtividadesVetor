#include <stdio.h>

int main () {int nota[10];
			 int result_soma;
			 int result_media;
			 
			 for(int i=0; i<10; i++) {
			 						  printf("Qual a nota da prova do aluno %d? ", i+1);
			 						  scanf("%d", & nota[i]);
			 						 }
			
			 for(int i=0; i<10; i++) {
			 						  result_soma=result_soma+nota[i];
			 						 }
			 						 
			 result_media=result_soma/10;
			 
			 printf("\n A media da sala foi de: %d", result_media);
		    }
