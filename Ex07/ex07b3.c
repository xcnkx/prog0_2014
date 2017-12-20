#include <stdio.h>

main(){
  int i;
  int data[5];
  
  printf("５人分の評価を入力してください。\n");
  
  for (i=0;i<5;i++){
    scanf("%d",&data[i]);
  }
  for (i=0;i<5;i++){
    printf("%d: %d ",i+1,data[i]);
    if (35>data[i] && 0<=data[i]) printf("F\n");
    else if (35<=data[i] && data[i]<50) printf("D\n");
    else if (50<=data[i] && data[i]<65) printf("C\n");
    else if (65<=data[i] && data[i]<80) printf("B\n");
    else if (80<=data[i] && data[i]<=100) printf("A\n");
  }
}
    
