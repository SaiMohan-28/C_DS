/*

1
b b
3 3 3
d d d d 
5 5 5 5 5

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
			if(i%2==0)
			printf("%c ",ch);
			else
			printf("%d ",i);
		}
		printf("\n");
		ch++;	
	}
	return 0;
}
