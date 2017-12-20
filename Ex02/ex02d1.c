#include <stdio.h>

main()
{
  int a,b,c,d,e,res1,res2,res3,res4,res5;
  
  printf("Enter x ->");
  scanf("%d",&c);

  a = c - 2;
  b = c - 1;
  d = c + 1;
  e = c + 2;
  /*y=x^2-4x+3*/
  res1 = a*a-4*a+3;
  res2 = b*b-4*b+3;
  res3 = c*c-4*c+3;
  res4 = d*d-4*d+3;
  res5 = e*e-4*e+3;

  printf("x : y\n");
  printf("%d : %d\n",a,res1);
  printf("%d : %d\n",b,res2);
  printf("%d : %d\n",c,res3);
  printf("%d : %d\n",d,res4);
  printf("%d : %d\n",e,res5);

}
