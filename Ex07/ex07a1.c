#include <stdio.h>

main(){
  
  int i;
  int a=1,b=2;
  int array[5];
  
  printf("Before: a=%d; b=%d\n",a,b);
  
  for (i = 0;i < 6;i++){
    array[i] = 999;
  }
  
  printf("After: a=%d;b=%d\n",a,b);

  printf("After:");
  for(i=0;i<6;i++){
    printf("array[%d]=%d;",i,array[i]);
  }
  printf("\n");
}
