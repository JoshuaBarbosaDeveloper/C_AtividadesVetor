#include <stdio.h>

int main () {float altura[4], media;
			 
			 for (int i=0; i<5; i++) {printf("Digite o valor de uma altura: ");
			 					      scanf("%f", & altura[i]);}
			 
			 media= (altura[0]+altura[1]+altura[2]+altura[3])/4;
			 
			 printf("A media de alturas da sua sala e de: %f", media);}
			
				
			 

