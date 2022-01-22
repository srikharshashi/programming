#include <math.h>
#include <stdio.h>
void main()
{

   int a, b, c;
   scanf("%d %d %d", &a, &b, &c);

   float disc = (b * b) - (4 * a * c);

   if (disc < 0.0)
   {
      float real = (-b) / (2.0 * a);
      float imag = sqrt(-disc) / (2 * a);
      printf("%.2f + i %.2f ", real, imag);
      printf("%.2f - i %.2f ", real, imag);
   }
   else if (disc == 0.0)
   {
      float real = (-b) / (2 * a);
      printf("%.2f", real);
   }
   else if (disc > 0.0)
   {
      float root1=(-b+sqrt(disc))/(2*a);
      float root2=(-b-sqrt(disc))/(2*a);
      printf(" root 1 : %.2lf \n", root1);
      printf(" root 2 : %.2lf \n", root2);
   }
}  