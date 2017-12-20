/*プロトタイプ宣言のintをdoubleに変えて、cirarea_r4関数の"r=(int)(r*1000+0.5)/1000;"を消し、
新しい変数Sを宣言し、戻り値をSにした */
#include <stdio.h>
#define PI 3.141592
double cirarea_r4(double);

main()
{
  double x;
  double menseki;

  printf("円の半径を入力して下さい ");
  scanf("%lf",&x);
  menseki=cirarea_r4(x);
  printf("半径%gの円の面積は%gです\n",x, menseki);
}

double cirarea_r4(double r)
{
  double S;
  S=PI*r*r;
  return S;
}

