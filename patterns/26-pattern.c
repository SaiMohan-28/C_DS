/*

a
2 2
c c c 
4 4 4 4
e e e e e

*/
#include<stdio.h>
int main()
{
	int n;
	char ch='a';
	printf("Enter NUmber\n");
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=i;j++)
		{
			if(i%2!=0)
			printf("%c ",ch);
			else
			printf("%d ",i);
		}
		printf("\n");
		ch++;
	}
	return 0;
}
