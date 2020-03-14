#include<stdio.h>

int main(void){
float x, i,n, suma, P;
printf("Introduce n: ");
scanf("%f", &n);
i=0;
suma=0;
if(n>0){
	do{
		printf("Introduce x: ");
		scanf("%f", &x);
		suma=suma+x;
		i++;
		}while(i<n);
		P=suma/n;
		printf("Promedio: %f\n", P);
		}else{
printf("Dato no valido");
}
}
