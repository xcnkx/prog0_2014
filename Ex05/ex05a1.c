#include <stdio.h>

main()
{
  int n,m, count=0;

  printf("初期値を入力して下さい\n");
  scanf("%d",&n);
  while(n != 0) {
    count = count+1;
    m = n%2;
    n = n/2;
    printf("ループ%d回目 商 %d  あまり %d\n", count, n, m);
  }
}
