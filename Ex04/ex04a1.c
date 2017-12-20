/* 税金を計算するプログラム（適用税率の自動判定） */
/* 作成者：                               */
/* 作成日：                               */
#include <stdio.h>
main()
{
  double taxrate, tax;
  int income;

  printf("年収を万円単位の整数（例えば,320）で入力してください:\n");
  scanf("%d", &income);

  if (income <= 400) {
    taxrate = 0.10;
  } else{
    taxrate = 0.18;
  }
  tax = (double)income * taxrate;
  printf("あなたの収入は%d万円で、その税金は%f万円です\n", income, tax);
}

