#include<stdio.h>
int main()
{
   double inch, cm;

   printf("Enter Inches: ");
   scanf("%lf",&inch);

   cm = 2.54*inch;
   printf("Centimeters= %.2lf\n",cm);

   return 0;
}
