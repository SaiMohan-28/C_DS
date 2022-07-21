/*

a
A A
a a a 
A A A A
a a a a a

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
			printf("%c ",(ch-32));
			else
			printf("%c ",ch);
		}
		printf("\n");
	}
	return 0;
}
