#include <stdio.h>
double triple(double);

main(){
  double t,x = 2.0;
  t = triple(x);
  printf("x: %g, x*x*x: %g\n",x,t);
}

double triple(double x)
{
  return x*x*x;
}
