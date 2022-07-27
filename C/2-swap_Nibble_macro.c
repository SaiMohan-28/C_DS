#include<stdio.h>

#define SWAP(n) ((n & 0x0f)<<4) | ((n & 0xf0)>>4)

int main()
{
	int n;
	printf("Enter Number\n");
	scanf("%d",&n);
	printf("After Swap= %d\n",SWAP(n));
	return 0;
}
