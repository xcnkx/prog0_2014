#include <stdio.h>

main()
{
  int a,b,c,d,e,res,ave,rmd;
  
  printf("Enter 5 numbers ->");
  scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
  
  res = a+b+c+d+e;
  ave = res/5;
  rmd = res%5;

  printf("合計 = %d\n",res);
  printf("平均（商）= %d\n",ave);
  printf("平均（余り）= %d\n",rmd);
}

  
  
  
