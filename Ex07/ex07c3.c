#include <stdio.h>

main(){
  int data[10]={1,2,3,4,5,6,7,8,9,10};
  int i;
 
  for (i = 0; i < 10; i++){
    printf("%d ", data[i]);
  }
  printf("\n");
  
  for (i=0;i<10;i++){
    data[i]=11-data[i];
  }
  for (i = 0; i < 10; i++){
    printf("%d ", data[i]);
  }
  printf("\n");
}
