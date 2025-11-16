#include<stdio.h>
int main()
{
	int arr[50][50],brr[50][50],crr[50][50],i,j,n;
	printf("Addition of two matrices:\n");
	printf("___________________________\n");
	printf("Input the size of the square matrix:");
	scanf("%d",&n);
	
	/*stored value into the array*/
	printf("Input element in the first matrix:\n");
	for(i=0;i<n;i++){
		for(j=0;j<n;j++)
		{
			printf("element_[%d].[%d:]",i,j);
			scanf("%d",&arr[i][j]);
		}
	}
	printf("Input elements in the second matrix:\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
		printf("element_[%d].[%d:]",i,j);
			scanf("%d",&arr[i][j]);	
		}
	}
	printf("\nThe first matrix is:");
	for(i=0;i<n;i++)
	{
		printf("\n");
		for(j=0;j<n;j++)
		printf("%d\t",brr[i][j]);
	}
	printf("\nThe second matrix is:");
	for(i=0;i<n;i++)
	{
		printf("\n");
		for(j=0;j<n;j++)
		printf("%d\t",brr[i][j]);
	}
   /*calculate the sum of the matrix*/
   	for(i=0;i<n;i++)
   		for(j=0;j<n;j++)
   		crr[i][j]=arr[i][j]+brr[i][j];
   		printf("\nThe addition of two matrix is:");
     	for(i=0;i<n;i++)
	   {
	   		printf("\n");
		for(j=0;j<n;j++)
		printf("%d\t",crr[i][j]);
		   }	
}
