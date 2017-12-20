#include <stdio.h>

main(){
  double x,y,tan;
  
  printf("座標を入力してください：");
  scanf("%lg%lg",&x,&y);
  printf("%g %g\n",x,y);
  
  tan = x/y;
  
  if(x==0) printf("北向きです\n");
  else if(y==0 && x<0) printf("西向きです\n");
  else if(y==0 && x>0) printf("東向きです\n");
  else if(y==0 && x==0) printf("あなたは原点にいます\n");
  else if(tan>0 && tan<1) printf("東北東向きです\n");
  else if(tan>0 && tan>1) printf("北北東向きです\n");
  else if(tan<0 && tan<-1) printf("西北西向きです\n");
  else if(tan<0 && tan>-1) printf("北北西向きです\n");
  else if(tan==1) printf("北東向きです\n");
  else if(tan==-1) printf("北西向きです\n");
}
