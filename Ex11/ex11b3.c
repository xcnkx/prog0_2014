#include <stdio.h>

main(){
  
  int data[10][3],i,j,x;
 

  for(i=0;i<10;i++){
    for(j=0;j<3;j++){
      if(j==0){
	data[i][j] = i+1;
      }
      else {
	data[i][j] =(i+1)*data[i][j-1];
      }
    } 
  }
  
  printf("３乗値を入力してください！");
  scanf("%d",&x);
  
   for(i=0;i<10;i++){
     if(x == data[i][2]){
       printf("%dの３乗 = %d\n",x,i+1);
       printf("%dの２乗 = %d\n",i+1,data[i][1]);
       break;
     }
   }
   if(i==10){
     printf("該当値がありません\n");
   }
}
      
