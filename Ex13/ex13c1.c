#include <stdio.h>
#define N 9

double kaijo(int);

main()
{
  int i;
  double e = 1;
  for (i=1;i<=N;i++)
    { 
      e += (double)(1/kaijo(i));
    }
  printf("e = %f\n",e);
  
}

double kaijo(int n)
{
  int i,x;
  x = n;
  
  for (i=n-1;i>0;i--)
    {
      x *= i;
    }

  return x;
}
