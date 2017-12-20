#include <stdio.h>

main(){
  
  int n;
  int data[10]={1,12,23,34,45,56,67,78,89,90};

  printf("添字を入力してください:");
  scanf("%d",&n);
  
  if (0<=n&&n<10){
    printf("data[%d]=%d\n",n,data[n]);
  }
  else printf("範囲外です！\n");
}
  
  
