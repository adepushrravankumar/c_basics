#include<stdarg.h>
#include<stdio.h>
int add(int,...);

int add(int x,...)
{
	int data,i;
	va_list opt;
	va_start(opt,x);

	for(i=0;i<x;i++)
	{
		data = va_arg(opt,int);
		printf("\n %d \n",data);

	}
	va_end(opt);
}

int main()
{
	int result;
	
	add(5,10,20,30);
	add(0,100,200,300);

}
