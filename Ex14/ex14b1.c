#include <stdio.h>
#include <math.h>

double hypotenuse(double, double);

main()
{
  double a,b;
  
  printf("直角三角形の斜辺以外の２辺の長さをそれぞれ空白で区切って入力してください。\n");
  scanf("%lg%lg",&a,&b);
  printf("斜辺の長さ = %f\n",hypotenuse(a,b));

}


double hypotenuse(double a, double b)
{
  double c;
  
  c = pow(a,2.0)+pow(b,2.0);
  
  return sqrt(c);
}
