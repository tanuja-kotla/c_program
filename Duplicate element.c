#include<stdio.h>
int main()
{
	int i,j,n;
	printf("Enter size of array:");
	scanf("%d",&n);
	int arr[n];
	printf("Enter any %d elements in array:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Duplicate elements are:");
	for(i=0;i<n;i++)
	{
		int rep=0;
		int cut=0;
		for(j=0;j<n;j++)
		{
			if(j<i && arr[j]=arr[j])
			{
				rep=1;
				break;
			}
			if arr[i]=arr[j]
			{
				cut++;
			}
		}
		if(!rep&&cut>1)
		{
			printf("%d",arr[i]);
		}
	}
}
