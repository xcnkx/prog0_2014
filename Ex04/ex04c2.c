#include <stdio.h>

main(){
  double tem;
  int hum;
  
  printf("温度と湿度を入れてください　");
  scanf("%lg%d",&tem,&hum);
  printf("温度：%g  湿度：%d\n",tem,hum);
  
  if(tem <19) printf("寒い\n");
  else if((tem>=19 && tem <29)&&(hum<60)) printf("快適\n");
  else if(tem>=19 && hum>60) printf("蒸し暑い\n");
  else if(tem>=29 && hum<60) printf("暑い\n");
}
