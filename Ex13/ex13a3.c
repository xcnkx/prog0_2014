#include <stdio.h>

main()
{
  int a, b, value;

  printf("Input a, b > ");

  value = scanf("%d%d", &a, &b );
  printf("scanf value = %d (a:%d, b:%d)\n", value, a, b );
}
