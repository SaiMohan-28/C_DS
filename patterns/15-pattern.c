/*
a
b a
c b a
d c b a
e d c b a

*/
#include<stdio.h>
int main()
{
	int n;
	char ch='a',ch1='a';
	printf("Enter Number\n");
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		ch=ch1;
		for(int j=1;j<=i;j++)
		{
			if(ch>='a')
			printf("%c ",ch);
			ch--;
		}
		printf("\n");
		ch1++;
	}
	return 0;
}
