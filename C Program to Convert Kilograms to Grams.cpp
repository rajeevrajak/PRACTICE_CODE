#include<stdio.h> 
int main()
{
   double kg, gm;

   printf("Enter Kilograms: ");
   scanf("%lf",&kg);

   gm = 1000*kg;
   printf("Grams=%.2lf\n",gm);

   return 0;
}
