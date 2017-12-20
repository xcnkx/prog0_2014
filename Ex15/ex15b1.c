#include <stdio.h>
#define MAX 10

main()
{
  int i,j,n,k,cnt = 1,data[MAX][MAX];
  
  //値の入力
  while(1)
    {
      printf("nを入力してください：");
      scanf("%d",&n);
  
      if(n <= MAX-2 && n >= 0) break;
      else 
	{
	  printf("%d以下の自然数を入力してください\n",MAX-2);
	}
    }

  //初期化  

  for(i=0; i<10; i++)
    {
      for(j=0 ; j<10; j++)
	{
	  data[i][j] = 0;
	}
    }

  data[0][0] = 1;

  // 値の計算＆表示
  
  for(i=1; i<=n+1; i++)
    {
      for(j=1 ; j<=cnt; j++)
	{
	  data[i][j] = data [i-1][j-1] + data[i-1][j];
	  printf("%3d\t",data[i][j]);
	}
      cnt++;
      printf("\n");
    }
  
  
}


  
