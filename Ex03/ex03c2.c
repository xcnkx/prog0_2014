#include <stdio.h>

main(){
  double a,b,c,d,e,ave,ha,hb,hc,hd,he;
  
  printf("五人分の体重を空白で分て入力してください\n");
  scanf("%lg%lg%lg%lg%lg",&a,&b,&c,&d,&e);
  
  ave = (a+b+c+d+e)/5;

  printf("五人の体重の平均値: %.1f [kg]\n",ave);

  ha = a-ave;
  hb = b-ave;
  hc = c-ave;
  hd = d-ave;
  he = e-ave;

  printf("1人目の体重: %.1f [kg], 平均からの偏差: %.1f [kg]\n",a,ha);
  printf("2人目の体重: %.1f [kg], 平均からの偏差: %.1f [kg]\n",b,hb);  
  printf("3人目の体重: %.1f [kg], 平均からの偏差: %.1f [kg]\n",c,hc);
  printf("4人目の体重: %.1f [kg], 平均からの偏差: %.1f [kg]\n",d,hd);
  printf("5人目の体重: %.1f [kg], 平均からの偏差: %.1f [kg]\n",e,he);
}
