/*

0
-1 2
-3 4 -5
6 -7 8 -9 
10 -11 12 -13 14

*/
#include<stdio.h>
int main()
{
	int n,sum=0;
	printf("Enter Number\n");
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		for(int j=0;j<i;j++)
		{
			if(sum%2==0)
			printf("%d ",sum);
			else
			printf("-%d ",sum);
			sum++;
		}
		printf("\n");
		
	}
	return 0;
}
