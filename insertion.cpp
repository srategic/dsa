#include<stdio.h>
#include<conio.h>
int main()
{
	int arr[6]={6,7,2,9,3};
	int i,n;
	printf("enter na index position");
	scanf("%d",&n);
	for(i=6;i>=n;i--)
	{
		arr[i]=arr[i-1];
	}
	arr[n]=10;
	for(i=0;i<=5;i++)
	{
		printf("%d\t",arr[i]);
	}
}
