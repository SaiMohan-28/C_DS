/*
a
b c
d e f 
g h i j
k l m n o

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
			ch++;
		}
		printf("\n");
	}
	return 0;
}
