/* 合格、不合格を判定するプログラム（エラー処理付き） */
/* 作成者：                                   */
/* 作成日時：                                 */
#include <stdio.h>
main()
{
  int score;

  printf("点数を入れて下さい ");
  scanf("%d",&score);
  printf("score : %d\n", score);

  printf("方法１による実行例\n");
/* 方法１：入力エラーの場合、合格の場合、不合格の場合、
それぞれについてif文で表現する方法 */
/* この行以降に方法１を実現するif文を書いて下さい */
  if(score < 0 || score > 100) printf("エラー\n");
  if(score >= 50 &&  score <= 100) printf("合格\n");
  if(score >= 0 && score < 50) printf("不合格\n");



  printf("方法２による実行例\n");
/* 方法２：多岐選択(if else)を使って、ふるい落としする方法 */
/* この行以降に方法２を実現するif文を書いて下さい */
  if(score < 0 || score > 100) printf("エラー\n");
  else if(score >= 50) printf("合格\n");
  else printf("不合格\n");



}
