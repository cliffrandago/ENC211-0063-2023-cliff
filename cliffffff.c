#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int a, b, c, d;
    printf("a:");
    scanf("%d",&a);
    printf("b:");
    scanf("%d",&b);
    printf ("c:");
    scanf("%d",&c);
    d=a+b+c;
    printf("%d + %d + %d = %d\n", a, b, c, d);

    return 0;
}
