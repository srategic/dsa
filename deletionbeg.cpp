#include<stdio.h>
#include<conio.h>
int main()
{
	int arr[5]={2,4,6,8,5};
	int i;
	for(i=0;i<=5;i++)
	{
		arr[i]=arr[i+1];
	}
	for(i=0;i<4;i++)
	{
		printf("%d\t",arr[i]);
	}
	printf("\n%d", sizeof(arr));
}
