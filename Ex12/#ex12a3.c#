#include <stdio.h>
#define NUM 20
#define SUBJ 9

main(){
  
  int num,subj,i,j,sum_r,sum_c;
  int data[NUM+1][SUBJ+1];
  /*初期化*/
  for(i=0;i<NUM+1;i++){
    for(j=0;j<SUBJ+1;j++){
      data[i][j]=0;
    }
  }
  /*入力*/
  scanf("%d%d",&subj,&num);
  for(i=0;i<num;i++){
    for(j=0;j<subj;j++){
      scanf("%d",&data[i][j]);
    }
  }
  
  /*平均処理*/
  
  for(i=0;i<num;i++){
    sum_r = 0;
    for(j=0;j<subj;j++){
      sum_r += data[i][j];
    }
    data[i][subj] = (100*sum_r)/ subj;
  }
  for(i=0;i<subj;i++){
    sum_c = 0;
    for(j=0;j<num;j++){
      sum_c += data[j][i];
    }
    data[num][i] =  (100*sum_c) / num;
  }
   
  /*表示*/
  printf("科目数：%d, 学生数: %d\n",subj,num);
  
  for(i=0;i<=num;i++){
    for(j=0;j<=subj;j++){
      if(j!=subj && i!=num){
	printf("%-6d",data[i][j]);
      }
      
      else if(j==subj && i!=num){
	printf(": %-6.1f",(double)data[i][j]/100);
      }
      else if(i==num && j!=subj){
	printf("%-6.1f",(double)data[i][j]/100);
      }
    }
    printf("\n");
  }
}
