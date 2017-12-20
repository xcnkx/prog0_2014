/* 条件式の間違いによる影響を調べるためのプログラム */
/* 作成者：                                */
/* 作成日：                                */
#include <stdio.h>
main()
{
  int a, b;

  printf("a と b を入力して下さい> ");
  scanf("%d%d", &a, &b);
  printf("a=%d, b=%d\n", a, b);

  if ( a = b ) printf("a と b は等しい\n");
  else printf("a と b は等しくない\n");
  printf("a=%d, b=%d\n", a, b);
}
