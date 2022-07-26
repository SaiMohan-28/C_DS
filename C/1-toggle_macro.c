#include<stdio.h>
#define TOGGLE(num,pos) num^(1<<pos)

int main()
{
	int num,pos;
	printf("Enter Number and Position\n");
	scanf("%d%d",&num,&pos);
	printf("%d\n",TOGGLE(num,pos));
	return 0;
}

