#include <stdio.h>

main(){
  int a[10];
  int max,min,i;
  
  printf("10個の整数を空白で区切って入力してください。\n");
  
  for (i=0;i<10;i++){
    scanf("%d",&a[i]);
    
    if (i==0){
      max=a[i];
      min=a[i];
    }
    else {
      if (max<a[i]){
	max = a[i];
      }
      if (min>a[i]){
	min = a[i];
      }
    }
  }
  printf("最大値は%dです。\n最小値は%dです。\n入力された整数の表示\n ",max,min);
  for (i=0;i<10;i++){
    printf("%d ",a[i]);
  }
  printf("\n");
}

  
