#include <stdio.h>

main()
{
  int a1,d,n,an,Sn;

  printf("Enter a1 d n ->");
  scanf("%d%d%d",&a1,&d,&n);

  an = a1+(n-1)*d;
  Sn = n*(a1+an)/2;
  
  printf("an = %d\nSn = %d\n",an,Sn);
}
