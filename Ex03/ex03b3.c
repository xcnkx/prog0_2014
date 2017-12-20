#include <stdio.h>

main()
{
  double a,b,res;

  printf("長方形の，縦の辺の長さと横の辺の長さを，cm で入力して下さい :");
  scanf("%lg %lg",&a,&b);
  
  res = 2*(a+b);

  printf("長方形の周の長さは,%.1f cmです。\n",res);
}
