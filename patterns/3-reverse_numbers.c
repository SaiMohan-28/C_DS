/*
5
44
333
2222
11111
*/

#include<stdio.h>
int main()
{
	int n,count=5;
	printf("Enter Number\n");
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=i;j++)
		{
			printf("%d",count);
		}
		printf("\n");
		count--;
	}
	return 0;
}
