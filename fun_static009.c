#include<stdio.h>

void fun(void);

const int i;

int main()
{
	fun();
	fun();
	fun();
	printf("%d",sizeof(int));
	return;
}

void fun(void)
{
//	static int i = 10;
	printf("i = %d\n",i);
//	i++;
}
