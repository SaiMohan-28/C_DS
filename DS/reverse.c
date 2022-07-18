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
void reverse()
{
	stu *prev=NULL,*cur=head,*nex=NULL;
	while(cur!=NULL)
	{
		nex=cur->next;
		cur->next=prev;
		prev=cur;
		cur=nex;
	}
	head=prev;
}

int main()
{
      createnode(100);
      createnode(200);
      createnode(300);
      createnode(400);
      createnode(500);
      reverse();
      
   return 0;
}
