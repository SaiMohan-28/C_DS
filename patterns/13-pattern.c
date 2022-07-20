/*
e
d d
c c c
b b b b
a a a a a
*/
#include<stdio.h>
int main()
{
	int n,temp;
	char ch='a';
	printf("Enter  Number\n");
	scanf("%d",&n);
	temp=n-1;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=i;j++)
		{
			printf("%c ",ch+temp);
		}
		printf("\n");
		temp--;
	}
	return 0;
}
