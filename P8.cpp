#include<stdio.h>
int main(void){
	int x, y, z, i;
	printf("Introduce x: ");
	scanf("%d", &x);
	printf("Introduce y: ");
	scanf("%d", &y);
	for(i=0;i<y;i++){
		z=x*(i+1);
		printf("%d\n",z);
	}
}
