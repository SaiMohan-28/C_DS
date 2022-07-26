#include<stdio.h>
int main()
{
	char ch[]={1,2,3,4};
	int *ptr=ch;
	printf("%p\n",ptr);	//0x7fff7b699674
	printf("%p\n",++ptr);	//0x7fff7b699678
	printf("%p\n",++ptr);	//0x7fff7b69967c
	return 0;
}
