/*
a
b b
c c c
d d d d
e e e e e

*/
#include<stdio.h>
int main()
{
	int n;
	char ch='a';
	printf("Enter Number\n");
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=i;j++)
		{
			printf("%c ",ch);
		}
		printf("\n");
		ch++;
	}
	return 0;
}
