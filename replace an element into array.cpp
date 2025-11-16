#include<stdio.h>
int main()
{
	//declare an array
	int arr[]={1,2,3,4,5};
	
	//display the original array
	printf("original array:");
	for(int i=0;i<5;i++){
		printf("%d",arr[i]);
	}
	//specify the index to replace
	int index_to_replace=2;
	//specify the new value
	int new_value=10;
	//replace the element at the specified index
	arr[index_to_replace]=new_value;
	//display the modified array
	printf("\nModified array:");
	for(int i=0;i<5;i++)
	{
		printf("%d",arr[i]);
	}
	return 0;
}
