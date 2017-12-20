#include <stdio.h>

int sum(int);

main()
{
  int n,s;
  printf("整数ｎを入力してください。\n");
  scanf("%d",&n);
  s = sum(n);
  printf("1から%dまでの和は%dです。\n",n,s);
}

int sum(int n)
{
  int i,s=0;
  for (i=1;i<=n;i++)
    {
      s+=i;
    }
  return s;
      
  // return 1/2*(n*(n+1));
}
