/*

1
2 3
5 8 13
21 34 55 89
144 233 377 610

*/
#include<stdio.h>
int main()
{
	int n,sum=0,prev=1,next;
	printf("Enter Number\n");
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=i;j++)
		{
			next=sum+prev;
			printf("%d ",next);
			sum=prev;
			prev=next;
		}
		printf("\n");
	}
	return 0;
}
