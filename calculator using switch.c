#include<stdio.h>
int main()
{
	char op;
	double first,second;
	printf("Enter an operator(+,-,*,/):");
	scanf("%c",&op);
	printf("Enter two operands:");
	scanf("%1f%1f",&first,second);
	switch(op){
		case'+':
		printf("%11f+%11f=%11f",first,second,first+second);
		break;
		case'-':
		printf("%11f-%11f=%11f",first,second,first-second);
		break;
		case'*':
		printf("%11f*11f=%11f",first,second,first*second);
		break;
		case'/':
		printf("%11f/%11f=%11f",first,second,first/second);
		break;
		//operator doesnt match any case contsant default;
		printf("Error!operator is not correct");
	}
	return 0;
}
