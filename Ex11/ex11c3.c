#include <stdio.h>
#define R 3
#define C 4

main(){

  int data[R+1][C+1];
  int i,j,sum_r=0,sum_c=0;
  /*配列の初期化*/
  for(i=0;i<R+1;i++){
    for(j=0;j<C+1;j++){
      data[i][j]=0;
    }
  }

  printf("Enter 3 x 4 data\n");

  for(i=0;i<R;i++){
    for(j=0;j<C;j++){
      scanf("%d",&data[i][j]);
    }
  }
  /*計算処理*/
  for(i=0;i<R;i++){
    sum_r = 0;
    for(j=0;j<C;j++){
      sum_r += data[i][j];
    }
    data[i][C] = (100*sum_r)/ C;
  }
  for(i=0;i<C+1;i++){
    sum_c = 0;
    for(j=0;j<R+1;j++){
      sum_c += data[j][i];
    }
    data[R][i] =  (100*sum_c) / R;
  }
    
  data[R][C] = data[R][C] / 100;
  
  /*出力*/
  printf("Data and average\n");
  
  for(i=0;i<R+1;i++){
    for(j=0;j<C+1;j++){
      if(j!=C && i!=R){
	printf("%5d",data[i][j]);
      }
      else{
	printf("%5.2f",(double)data[i][j]/100);
      } 
    }
    printf("\n");
  }
}
