/*****************************************
 *
 * ニュートン法による三乗根の計算
 *
 *****************************************/
#include <stdio.h>
#include <math.h>
#define EPS 1.0e-6

double f(double, double, double);
double df(double, double);

main()
{
  double a, x, fx, dfx, p;
  printf("根の次数を入力してください。\n");
  scanf("%lg",&p);
  printf("根を求めたい数を入力してください。\n");
  scanf("%lg",&a);
  x = a;
  printf("x(k-1)\t\tfx\t\tdfx\t\tx(k)\t\tf(n,x,%f)\n",a);
  while((fx = f(x,a,p)) > EPS ){
    dfx = df(x,p);
    printf("%f\t%f\t%f", x, fx, dfx);
    x = x - fx/dfx;
    printf("\t%f\t%f\n", x, f(x,a,p));
  }
  printf("%d-th root(%f) = %f\n",(int)p,a,x);
}

double f(double x, double a ,double p)
{
  double fx;
  fx = pow(x, p) - a;
  return fx;
}

double df(double x,double p)
{
  double dfx;
  dfx = p*pow(x, p-1.0);
  return dfx;
}
