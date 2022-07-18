/*
1
12
123
1234
12345
*/
#include<stdio.h>
int main()
{
	int n,count;
	printf("Enter Number\n");
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		count=1;
		for(int j=1;j<=i;j++)
		{
			printf("%d",count);
			count++;
		}
		printf("\n");
	}
	return 0;
}
