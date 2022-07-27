#include<stdio.h>
int a = 10;
int sum(int num1, int num2) 
{
	static int a = 0;
	printf("In Fun a=%d\n",a);//0,8
	return (a=num1+num2);
}
int main()
{
	printf("a=%d\n",a);//10
	int a = 20;
	printf("a=%d\n",a);//20
	sum(5,3);
	printf("a=%d\n",a);//20
	sum(6,9);
	printf("a=%d\n",a);//20
	return 0;
}
