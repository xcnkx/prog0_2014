#include <stdio.h>

main(){
  int data[3][3],i,j,k;
  
  printf("３行３列の行列を整数で入力して下さい\n");
  
  for(i=0;i<3;i++){
    for(j=0;j<3;j++){
      scanf("%d", &data[i][j]);
    }
  }
  printf("行列を何倍（スカラ倍）しますか？ ");
  scanf("%d",&k);
  
  for(i=0;i<3;i++){
    for(j=0;j<3;j++){
      
      data[i][j] = k*data[i][j];
      
    }
  }
  
  printf("配列要素を表示します。\n");
  
  for(i=0;i<3;i++){
    for(j=0;j<3;j++){
      printf("%3d",data[i][j]);
    }
    printf("\n");
  }
}
