#include<stdio.h>
int main()
{
	int n;
	printf("Enter Number\n");
	scanf("%d",&n);
	int *ptr=&n;
	int **p=&ptr;
	printf("%p\n",ptr);
	printf("%p\n",p);
	printf("%d\n",**p);
	return 0;
}
