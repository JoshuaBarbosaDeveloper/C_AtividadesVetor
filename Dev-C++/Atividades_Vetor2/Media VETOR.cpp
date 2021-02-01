#include <stdio.h>

int main () {int idade[3];
		     float med;
			
			 printf("\n Qual a primeira idade? ");
			 scanf("%d", & idade[0]);
			 printf("\n Qual a segunda idade? ");
			 scanf("%d", & idade[1]);
			 printf("\n Qual a terceira idade? ");
			 scanf("%d", & idade[2]);
			 			 
			 med= (idade[0]+idade[1]+idade[2])/3;
			 
		     printf("\n A media dessas idades e de: %f", med);}

			 
			 
