#include <stdio.h>

main(){

  double a,b,c,w,d;
  
  printf("直方体の３辺の長さ（cm）をそれぞれ入力してください：");
  scanf("%lg%lg%lg",&a,&b,&c);
  printf("直方体の重さ（g）を入力してください：");
  scanf("%lg",&w);
  
  d = w/(a*b*c);
  
  printf("密度は %.1lf (g/立方cm)です。\n",d);
}
