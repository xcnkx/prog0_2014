#include <stdio.h>
double function (double,double,double);
    
main()
{
  double a,b,x,y;
    
  printf("二つの実数a, bを入力してください： ");
  scanf("%lf %lf", &a, &b);
  printf("関数はy=%5.2f x+%5.2f です。\n",a,b);
  printf("では、実数xを入力してください： ");
  scanf("%lf",&x);
  y=function(a,b,x);
  printf("y = %5.2f \n", y);
}
double function(double a, double b, double x)
{  
  return a*x+b;
}
