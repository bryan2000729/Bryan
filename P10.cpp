#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(void){
    int Mat[20],grado[20];
	char nombrecompleto[20],primernombre[20],segundonombre[20],cumple[20],genero[20],carrera[20],school[20];
	int x,y=0,b=0,n;
	do{
	printf("\nMatricula: ");
	scanf ("%d",&Mat);
	do{
		fflush(stdin);
	printf("\nPrimer nombre:");
	gets(primernombre);
		fflush(stdin);
	printf("\nSegundo nombre:");
	gets(segundonombre);
		strcat(primernombre," ");
		strcat(primernombre,segundonombre);
		strcpy(primernombre,nombrecompleto);
	b=0;
	for(x=0;x<y;x++){
	if(strcmp(primernombre,nombrecompleto)==0){
		b=1;
	}else{
		b=0;
	}
		}
		if(b==1){
			printf("Nombre repetido,Introduzca otro nombre");
			system("pause");
		}
}while(b==1);
strcpy(nombrecompleto,primernombre);
		fflush(stdin);
	printf("\nDia de nacimiento: ");
	gets(cumple);
		fflush(stdin);
	printf("\nEscuela: ");
	gets(school);
		fflush(stdin);
	printf("\nCarrera: ");
	gets(carrera);
		fflush(stdin);
	printf("\nGrado: ");
	scanf("%d",&grado);
		fflush(stdin);
	printf("\nGenero: ");
	gets(genero);
	printf("Para ingresar mas estudiantes ingrese un numero diferente de 2: ");
	scanf("%d",&n);
	y++;
system("cls");
}while(n!=2);
	for(x=0;x<y;x++){
		printf("\n");
		printf("\nEstudiante %d \nMatricula %d\nNombre completo %s\nFecha de nacimiento %s\nEscuela %s\nCarrera %s\nGrado %d\nGenero %s",x,Mat,nombrecompleto,cumple,school,carrera,grado,genero);
		}
}
