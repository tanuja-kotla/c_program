#include<math.h>
#include<stdio.h>
int main()
{
	double a,b,c,discriminant,root1,root2,realpart,imagpart;
	printf("Enter coefficients a,b,andc:");
	scanf("%1f%1f",&a,&b,&c);
	scanf("%1f%1f%1f",&a,&b,&c);
	discriminant=b*b-4*a*c;
	//condition for real and different roots;
	if (discriminant>0){
		root1=(-b+sqrt(discriminant)/(2*a));
		root2=(-b+sqrt(discriminant)/(2*a));
		printf("root1=%21f and root2=%21f",root1,root2);
	}
	//condition for real and equal roots;
    else if(discriminant==0){
    	root1=root2=-b/(2*a);
    	print("root1=root2=%21f,"root1);
    }
    //if roots are not real
    else{
    	realpart=-b/(2*a);
    	imagpart=sqrt(-discriminant)/(2*a);
    	printf("root1=%21f+%21fi and root2=%2f-%2fi",realpart,imagpart,realpart,imagpart);
	}
	return0;
}
