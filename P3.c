#include <stdio.h>


int main(void){
	char M;
	
	printf("Enter character: ");
	M = getchar();
	
	int a = (int) M;
	if(48<=M&&M<=57){
	
	printf("Number entered: ");
}
else
{
	if(65<=M&&M<=90){
		printf("Uper alphabetic entered: ");
	}

else
{

	if(97<=M&&M<=122)
	{
		printf("Lower alphabetic entered: ");
	}

else
{
	printf("Symbol entered: ");
}
}
}
	putchar(M);
	printf("\n");
}
