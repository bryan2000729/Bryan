#include<stdio.h>
int main(void){
	int x, i=1, n, p, y;
	printf("Introduce x: ");
	scanf("%d",&x);
	if(x>0&&x<100){
	for(i=1;i<=x;i++){
		n=i;
		printf("%d\n",n);
	}
}else{
	printf("Error");
}
}
