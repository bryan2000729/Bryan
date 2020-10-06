#include<stdio.h>
int main(void){
	int i, num;
	printf("Bienvenido al programa, pulse 256 para ver el abecedario y 0 para salir.\n\n");
	do{
		printf("Introduzca  un numero del 1 al 255: ");
		scanf("%d",&num);
		if(num==256){
			for(i=65;i<=90;i++){
				printf("\nEl numero %d es el caracter: %c \t\n\n",i,i);
			}
			for(i=97;i<=122;i++){
				printf("\nEl numero %d es el caracter: %c \t\n\n",i,i);
				}
			}else{
				for(i=1;i<=255;i++);
				i=num;
				printf("\nEl numero %d en el codigo ASCII es: %c\n\n",num,i);
			}
	}while(num!=0);
}
