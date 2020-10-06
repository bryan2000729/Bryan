#include <stdio.h>
int main(void){
	int n=30, m=20;
	char c1='|', c2='-';
	int alto_actual=0, largo_actual=0;
	for(alto_actual=0;alto_actual<n;largo_actual=largo_actual+1){
		if(alto_actual=0){
			printf("%c",c1);
		for(largo_actual=0;largo_actual<m;largo_actual=largo_actual+1){
		printf("%c",c2);
		if(largo_actual=20){
			printf("%c",c1);
		}
		}
		}
		if(alto_actual=30){
		for(largo_actual=0;largo_actual<m;largo_actual=largo_actual+1){
		printf("%c",c2);
		}
		}
		printf("\n");
		}
}
