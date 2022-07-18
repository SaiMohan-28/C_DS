#include<stdio.h>
#include<stdlib.h>
typedef struct single
{
    int data;
    struct single *next;
}stu;


stu *head=NULL,*new =NULL,*latest=NULL;
void createnode(int data1)
{
    new = (stu *)malloc(sizeof(stu));
    new->data=data1;
    new->next =0;
    if(head==0)
        head=new;
    else
        latest->next=new;
    latest=new;
}

int loop()
{
	stu *slow=head;
	stu *fast=head;
	while(fast!=NULL && slow!=NULL && fast->next!=NULL)
	{
		slow=slow->next;
		fast=fast->next->next;
		if(slow==fast)
		{
			return 1;
		}
	}
	return 0;
}
int main()
{
      createnode(100);
      createnode(200);
      createnode(300);
      createnode(400);
      createnode(500);
      head->next->next->next->next=head;
      int ret=loop();
      if(ret==1)
      printf("Loop Found\n");
      else
      printf("No Loop\n");
   return 0;
}
