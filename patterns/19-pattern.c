/*

1
0 1
0 1 0
1 0 1 0
1 0 1 0 1

*/

#include<stdio.h>
int main()
{
	int n,count;
	printf("Enter  Number\n");
	scanf("%d",&n);
	count=n;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=i;j++)
		{
			if(count%2==0)
			printf("0 ");
			else
			printf("1 ");
			count--;
		}
		printf("\n");
	}
	return 0;
}
