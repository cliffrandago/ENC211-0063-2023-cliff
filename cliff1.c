#include <stdio.h>
#include <stdlib.h>

int main()
{
  float a,b,c;

  printf("Enter the first value:\n");
  scanf("%f",&a);
  printf("Enter the second value:\n");
  scanf("%f",&b);
  printf("Enter the third value:\n");
  scanf("%f",&c);
  printf("Pounds-to-Kilogram conversion table\n");

  {
      printf("%6.2f pounds= %6.2f kilograms\n",a, (a* 0.453592));
       printf("%6.2f pounds= %6.2f kilograms\n",b, (b* 0.453592));
        printf("%6.2f pounds= %6.2f kilograms\n",c, (c* 0.453592));
  }






   return 0;
}
