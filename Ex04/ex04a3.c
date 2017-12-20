/* 合格、不合格を判定するプログラム */
/* 作成者：                    */
/* 作成日：                    */
#include <stdio.h>
main()
{
 int score;

 printf("点数を入れて下さい ");
 scanf("%d",&score);
 printf("score : %d\n", score);

 printf("方法１による実行例\n");
/* 方法１：合格の場合と不合格の場合の２つのif文を使用する方法 */
/* この行以降に方法１を実現するif文を書いて下さい */
 if(score >= 50) printf("合格\n");
 if(score < 50) printf("不合格\n");

 
 printf("方法２による実行例\n");
/* 方法２：合格の場合とそれ以外（つまり不合格）の場合分けをif elseを使って実現する方法 */
/* この行以降に方法２を実現するif文を書いて下さい */
 if(score >=50) printf("合格\n");
 else printf("不合格\n");


}
