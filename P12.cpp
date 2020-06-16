#include <stdio.h>
#include <stdlib.h>
int func(int r,int b,int m){
	m=r*b;
	return  m;
}
int main(int argc, char *argv[]) {
	int arr[3][3];
	int x,b,z,f,w,k,res;
	for(x=0;x<3;x++){
		for(b=0;b<3;b++){
			printf("Ingrese valor ");
			scanf("%d",&k);
			arr[x][b]=k;
		}
	}
	printf("Ingrese numero entero a multiplicar la matriz");
	scanf("%d",&w);
	for(x=0;x<3;x++){
		for(b=0;b<3;b++){
		res=func(arr[x][b],f,w);
		arr[x][b]=res;
		}
	}
		for(x=0;x<3;x++){
			printf("\n");
		for(b=0;b<3;b++){
		printf("%d\t",arr[x][b]);
		}
	}
	return 0;
}
