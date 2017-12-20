#include <stdio.h>

double real(double, double, double, double);
double imaginary(double, double, double, double);

main()
{
  double a,b,c,d,r,i;

  printf("２つの複素数の実部と虚部の値をそれぞれ空白で区切って入力してください。\n");
  printf("複素数１ =  ");
  scanf("%lg %lg",&a, &b);
  printf("複素数２ =  ");
  scanf("%lg %lg",&c, &d);
  
  r = real(a, b, c, d);
  i = imaginary(a, b, c, d);

  if(r == 0) printf("２つの複素数の積 = %.2fi\n",i);
  else if(i == 0) printf("２つの複素数の積 = %.2f\n",r);
  else if(r == 0 && i == 0) printf("２つの複素数の積 = 0\n");
  else printf("２つの複素数の積 = %.2f %.2fi\n",r,i);



}

double real(double a, double b, double c, double d)
{
  return a*c + (-1)*b*d;
}

double imaginary(double a, double b, double c, double d)
{
  return a*d + b*c;
}
  
