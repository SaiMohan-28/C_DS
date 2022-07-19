/*
5
54
543
5432
54321
*/
#include<stdio.h>
int main()
{
	int n;
	printf("Enter Number\n");
	scanf("%d",&n);
	for(int i=n;i>0;i--)
	{
		for(int j=n;j>=i;j--)
		{
			printf("%d",j);
		}
		printf("\n");
	}
	return 0;
}
