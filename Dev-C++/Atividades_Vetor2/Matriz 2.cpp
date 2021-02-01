#include <stdio.h>

int main () {int matriz[3][3];

			 matriz[0][0]=1;
			 matriz[0][1]=0;
			 matriz[0][2]=0;
			 
			 matriz[1][0]=0;
			 matriz[1][1]=1;
			 matriz[1][2]=0;
			 
			 matriz[2][0]=0;
			 matriz[2][1]=0;
			 matriz[2][2]=1;
			 
			 for (int i=0; i<3; i++){for (int i2=0; i2<3; i2++) printf("%d ", matriz[i][i2]);
			 						 printf("\n");}}
