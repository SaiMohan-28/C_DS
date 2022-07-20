/*
a
a b
a b c
a b c d 
a b c d e

*/
#include<stdio.h>
int main()
{
	int n;
	char ch;
	printf("Enter Number\n");
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		ch='a';
		for(int j=1;j<=i;j++)
		{
			printf("%c ",ch++);
			//ch++;
		}
		printf("\n");
	}
	return 0;
}
