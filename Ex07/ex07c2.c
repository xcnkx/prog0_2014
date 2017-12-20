#include <stdio.h>

main(){
  int x[3],y[3];
  int i,inner;
  
  printf("ベクトルx：３個の整数を空白で区切って入力してください：");
  for (i=0;i<3;i++){
    scanf("%d",&x[i]);
  }
  printf("ベクトルy：３個の整数を空白で区切って入力してください：");
  for (i=0;i<3;i++){
    scanf("%d",&y[i]);
  }
  for (i=0;i<3;i++){
    inner += x[i]*y[i];
  }

  printf("xとyの内積は%dです。\n",inner);
 
  if (inner==0){
    printf("２つのベクトルは直行します\n");
  }
}
