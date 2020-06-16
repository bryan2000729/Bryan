#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int fibo(int d){
   if ((d==0) || (d==-1))
   return 1;
   else
   return fibo(d-1) + fibo(d-2);
}
   int main (void){
    int v,x,w,z=0;
printf("\nIngrese hasta que numero hacer la serie de fibonacci");
        scanf("%d",&w);
        system("cls");
		             printf("\nPosicion\tValor");
		   for (x=-1;x<=w;x++){
           v=fibo(x);
           printf("\n%d\t\t%d", x, v);
           }
       }
