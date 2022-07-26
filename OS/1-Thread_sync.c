#include<stdio.h>
#include<pthread.h>



pthread_mutex_t mutex;
unsigned int num=0;

void *even(void *args)
{
	while(num<=20)
	{
		if(num%2==0)
		{
			pthread_mutex_lock(&mutex);//locking
			printf("%d\n",num);
			num++;
		}
		else
		pthread_mutex_unlock(&mutex);//unlocking
	}
}

void *odd(void *args)
{
	while(num<=20)
	{
		if(num%2!=0)
		{
			pthread_mutex_lock(&mutex);//locking
			printf("%d\n",num);
			num++;
		}
		else
		pthread_mutex_unlock(&mutex);//unlocking
	}
}
int main()
{
	
	pthread_t a[2];//creating variable 
	pthread_create(&a[0],NULL,&even,NULL);//creating thread(thread ID,NULL,fun_name,fun_args)
	pthread_create(&a[1],NULL,&odd,NULL);//creating thread(thread ID,NULL,fun_name,fun_args)
	pthread_join(a[0],NULL);//to deallocate resources
	pthread_join(a[1],NULL);//to deallocate resources
	
	return 0;	
}
