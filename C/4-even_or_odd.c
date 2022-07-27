#include<stdio.h>

int even_odd(int num)
{
	if(num%2==0)
	return 0;
	else
	return 1;
}

int main()
{
	int n;
	printf("Enter Number\n");
	scanf("%d",&n);
	if(even_odd(n)==0)
	printf("Even\n");
	else
	printf("Odd\n");
	return 0;
}
