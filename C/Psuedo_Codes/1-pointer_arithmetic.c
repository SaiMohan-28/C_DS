#include<stdio.h>
int main()
{
	char arr[]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
	int *ptr=&arr;
	printf("%d \n",(*(char *)ptr+16));//type casting to char pointer
	return 0;
}
