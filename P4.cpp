#include <stdio.h>

int main(void){
	char x;
	char y;
	char Op;
	float z;
	printf("Ingrese Op: ");
	Op = getchar();
	printf("Ingrese x: ");
	x = getchar();
	int b = (int) x;
	printf("Ingrese y: ");
	y = getchar();
	int c = (int) y;
	switch(Op)
	{
		case '+':
		z = b + c;
			break;
		case '-':
			break;
		z = b - c;
			break;
		case '*':
		z = b * c;
			break;
		case '/':
		z = b / c;
			break;
	default: printf("Error");
	}
	putchar(z);
}
