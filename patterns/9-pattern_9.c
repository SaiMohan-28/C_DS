/*
1
4 9
16 25 36
49 64 81 100
121 144 169 196 225

*/


#include<stdio.h>
int main()
{
	int n,count=1;
	printf("Enter Number\n");
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=i;j++)
		{
			printf("%d ",count*count);
			count++;
		}
		printf("\n");
	}
	return 0;
}
