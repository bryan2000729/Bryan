#include<stdio.h>

int main(void){
int x, i=0,n, suma=0;
float P;
printf("Introduce n: ");
scanf("%d", &n);
i=0;
suma=0;
if(n>=0){
	while(i<=n){
		printf("Introduce x: ");
		scanf("%d", &x);
		suma=suma+x;
		i++;
		}
		P=suma/n;
		printf("Promedio: %f\n", P);
		}else{
printf("Dato no valido");
}
}
