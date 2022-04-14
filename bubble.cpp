#include<stdio.h>
#include<conio.h>
int main()
{
	int i;
	printf("enter the no of array you want to insert");
	scanf("%d",&i);
	int arr[i],no;
	printf("enter the elements in the array");
	for(int j=0;j<=i;j++)
	{
		scanf("%d",&arr[j]);
	}
	for(int j=0;j<=i;j++)
	{
		for(int k=j+1;k<=i;k++)
		{
			if(arr[j]>arr[k])
			{
				int temp=arr[j];
				arr[j]=arr[k];
				arr[k]=temp;
			}
		}
		
	}
	printf("sorted array is ");
	for(int j=0;j<=i;j++)
	{
		printf("%d\t",arr[j]);
	}
}
