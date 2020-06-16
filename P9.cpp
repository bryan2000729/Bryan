#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
	int main (void){
	char primernombre[20],segundonombre[20],nombrecompleto[20],cumple[20],genero[20],carrera[20],escuela[20],Mat[20],grado[20];
	char arr[20][7][200];
	int x=0,y=0,d=0,q=0,g=0,t,p,z=0;
	do{
	fflush(stdin);
	printf("\nMatricula: ");
	gets (Mat);
	fflush(stdin);
	printf("\nPrimer nombre: ");
	gets(primernombre);
	fflush(stdin);
	printf("\nSegundo nombre: ");
	gets(segundonombre);
		strcat(primernombre," ");
		strcat(primernombre,segundonombre);
		strcpy(primernombre,nombrecompleto);	
	t=0;
	for(x=0;x<strlen(Mat);x++){
	arr[x][0][g]=Mat[x];
 if(g>=1){
 for(x=1;x<=g;x++){
	for(y=0;y<=20;y++){
    if(nombrecompleto[y]==arr[y][1][x]){
    	t=1;
	}
		if(arr[y][2][x]==NULL){
			break;
		}
	}
	if(t==1){
		printf("\nNombre repetido intente otro: ");
		 system("pause");
		break;
	}	
} 
}
}while(t==1);
	for(x=0;x<=strlen(nombrecompleto)-1;x++){
		arr[x][1][g]=nombrecompleto[x];		
}	
		fflush(stdin);
	printf("\nDia de nacimiento: ");
	gets(cumple);
	for(x=0;x<=strlen(cumple)-1;x++){
		arr[x][2][g]=cumple[x];		
}
		fflush(stdin);
	printf("\nEscuela: ");
	gets(escuela);
	for(x=0;x<=strlen(escuela)-1;x++){
		arr[x][3][g]=escuela[x];		
}
		fflush(stdin);
	printf("\nCarrera: ");
	gets(carrera);
	for(x=0;x<=strlen(carrera)-1;x++){
		arr[x][4][g]=carrera[x];		
}
		fflush(stdin);
	printf("\nGrado: ");
	gets (grado);
	for(x=0;x<strlen(grado);x++){
		arr[x][5][g]=grado[x];
}
	fflush(stdin);
	printf("\nGenero: ");
		gets(genero);		
	for(x=0;x<=strlen(genero)-1;x++){
		arr[x][6][g]=genero[x];
	fflush(stdin);
}
	printf("Para ingresar mas estudiantes ingrese un numero diferente de 2: ");
	scanf("%d",&p);
if(p!=2){
	g++;
}
}while(p!=2);
	for(x=0;x<=g;x++){
		printf("\n\nAlumno\t %d ",x+1);
		for(z=0;z<=6;z++){
		printf("\n");
	for(y=0;y<=20;y++){
		printf("%c",arr[y][z][x]);
		if(arr[y][z][x]==NULL){
			break;
		}
}
}
}
}
