/*
1
3 5
7 9 11
13 15 17 19
21 23 25 27 29

*/

#include<stdio.h>
int main()
{
	int n,temp=1;
	printf("Enter Number\n");
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=i;j++)
		{
			printf("%d ",temp);
			temp+=2;
		}
		printf("\n");
	}
	return 0;
}

