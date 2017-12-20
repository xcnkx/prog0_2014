/* 学籍番号から所属班を判定するプログラム */
/* 作成者：                         */
/* 作成日：                         */
#include <stdio.h>
main()
{
  int id, han;

  printf("学籍番号の下三桁を入力してください(例: 400) ");
  scanf("%d", &id);/*三桁の数値'00x'は'x'として読むことができます*/

  han = id%3;

  switch(han){
  case 1:
    printf("この人は第１班です\n");
    break;

  case 2:
    printf("この人は第２班です\n");
    break;

  case 0:
    printf("この人は第３班です\n");
    break;

  } 
}
