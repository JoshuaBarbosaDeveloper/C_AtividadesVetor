#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int n, num, k, primo, posi;

    for(num=1; num<=10; num++){
   
    for(n=1; n<=100; n++)
    {
        primo=0;
        for(k=1; k<=num; k++)
            if(num%k==0)
                 primo++;
        if(primo>2){
            		printf("");
            		posi=posi+1;}

        else
            posi=posi+1;
            printf("%d -> %d // ", num, posi);
    }}
}
