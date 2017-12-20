#include <stdio.h>

main(){
  int n,i;
  int data[10];
  
    data[0]=1;
  
  for (i=1;i<10;i++){
    data[i]=2*data[i-1];
    printf("%d  ",data[i]);
  }
    
  printf("\n");
  scanf("%d",&n);

  
  for (i=0;i<10;i++){
    if (n<data[i]){
      printf("data[%d] = 2 * data[%d] = 2 * %d = %d\n",i,(i-1),data[i-1],data[i]);
    }
  }
}
