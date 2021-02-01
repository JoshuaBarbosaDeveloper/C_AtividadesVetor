#include <stdio.h>
#include <string.h>

typedef struct {
				char dono[20];
				char nome[20];
				char raca[20];
				char sexo;
				int idade;
			   } animal;
			   
			     animal cachorro1, cachorro2, cachorro3;
int main () {
			 strcpy(cachorro1.dono, "Ricardinho");
			 strcpy(cachorro1.nome, "Latim");
			 strcpy(cachorro1.raca, "Puddle");
			 cachorro1.idade = 3;
			 cachorro1.sexo = 'M';
			 
			 strcpy(cachorro2.dono, "Laryssa");
			 strcpy(cachorro2.nome, "Bisteca");
			 strcpy(cachorro2.raca, "Biggle");
			 cachorro2.idade = 8;
			 cachorro2.sexo = 'F';
			 
			 strcpy(cachorro3.dono, "Manuel");
			 strcpy(cachorro3.nome, "Cristiano Araujo");
			 strcpy(cachorro3.raca, "Morto");
			 cachorro3.idade = 9;
			 cachorro3.sexo = 'M';
			 
			 printf("\n O dono 1 se chama %s; \n Seu cachorro se chama %s; \n Seu sexo e %c; \n Sua raca e %s; \n Possui %d anos. \n", cachorro1.dono, cachorro1.nome, cachorro1.sexo, cachorro1.raca, cachorro1.idade);
			 
			 printf("\n O dono 2 se chama %s; \n Seu cachorro se chama %s; \n Seu sexo e %c; \n Sua raca e %s; \n Possui %d anos. \n", cachorro2.dono, cachorro2.nome, cachorro2.sexo, cachorro2.raca, cachorro2.idade);	 

			 printf("\n O dono 3 se chama %s; \n Seu cachorro se chama %s; \n Seu sexo e %c; \n Sua raca e %s; \n Possui %d anos. \n", cachorro3.dono, cachorro3.nome, cachorro3.sexo, cachorro3.raca, cachorro3.idade);	 
	 
            }
