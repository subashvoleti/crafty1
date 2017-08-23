#include<stdio.h>
int main()
{
	int a,i,flag=0;
	printf("enter a number:");
	scanf("%d",&a);
	for(i=2;i<=a;i++)
	{
		if(a%i==0)
		{
			flag=flag+1;
		}
	}
	if(flag==1)
	{
		printf("enter number is  prime number");
	}
	else
	{
		printf("enter number is not a prime");
	}
	return 0;
}


