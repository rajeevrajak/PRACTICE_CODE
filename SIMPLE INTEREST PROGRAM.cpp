#include<stdio.h>
int main()
{
	float p,r,t,si;
	printf("Enter principle\n");
    scanf("%f",&p);
    printf("Enter rate of interest\n");
    scanf("%f",&r);
	printf("Enter time\n");
	scanf("%f",&t);
	si=(p*r*t)/100;
	printf("Simple insterest=%f",si);
    return 0;	
	
}

