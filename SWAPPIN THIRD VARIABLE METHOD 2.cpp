#include<stdio.h>
int main()
{
	int a=10,b=20,c;
	printf("Before swapping a=%d and b=%d\n",a,b);
	c=a+b;
	a=c-a;
	b=c-b;
printf("After swapping a=%d and b=%d\n",a,b);	
}
