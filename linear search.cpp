#include<stdio.h>
int main()
{
	int a[20],i,key,n,pos,found=0;
	printf("How many element?");
	scanf("%d",&n);
	printf("Enter array element:\n");
	for(i=0;i<n;++i)
	{
		scanf("%d",&a[i]);
	}
	printf("\nEnter element to search:");
	scanf("%d",&key);
	for(i=0;i<n;i++)
	{
		if(key==a[i])
		{
			found=1;
			pos=i;
		}
	}
	if(found==1)
printf("Element found at index:%d",pos);
else
printf("Element not found.");
}

