/*
e
d e
c d e
b c d e
a b c d e

*/
#include<stdio.h>
int main()
{
	int n;
	char ch,ch1='a';
	printf("Enter Number\n");
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		ch=ch1+(n-1);
		for(int j=1;j<=i;j++)
		{
			printf("%c ",ch);
			ch++;
		}
		printf("\n");
		ch1--;
	}
	return 0;
}

