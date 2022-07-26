#include<stdio.h>
int main()
{
	char ch[]={1,2,3,4};
	char *ptr=ch;
	printf("%p\n",ptr++);
	return 0;
}
