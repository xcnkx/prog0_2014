#include <stdio.h>
main()
{
  double x = 42.8;
  int i = 7;

  printf("点数は%9f点です\n", x);
  printf("点数は%.3f点です\n", x);
  printf("点数は%e点です\n", x);
  printf("点数は%.3E点です\n", x);
  printf("単位数は%05dです\n", i);
  printf("単位数は%5dです\n", i);
  printf("単位数は%-5dです\n", i);
  printf("単位数は%+5dです\n", i);  
}
