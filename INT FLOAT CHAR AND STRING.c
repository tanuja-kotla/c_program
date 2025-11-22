#include<stdio.h>
int main()
{
	int a; float b; char ch;  char str[101];
	printf("Enter a number:");
	scanf("%d",&a);
	printf("enter a floating point value:");
	scanf("%f\n",&a);
	printf("enter a character:");
	scanf("%c",&ch);
	printf("enter a string:");
	scanf("%s",str);
	printf("%d\n%f]n\n%c\n%s%s",a,b,ch,str);
	return 0;
}
