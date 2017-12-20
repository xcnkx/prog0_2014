#include <stdio.h>

main(){
  int  jap,math,eng,sci,soc,gj,gm,ge,gsc,gso,g_total;
  double  g_ave;

  printf("国語の点数と重みを入力してください：");
  scanf("%d%d",&jap,&gj);
  printf("数学の点数と重みを入力してください：");
  scanf("%d%d",&math,&gm);
  printf("英語の点数と重みを入力してください：");
  scanf("%d%d",&eng,&ge);
  printf("理科の点数と重みを入力してください：");
  scanf("%d%d",&sci,&gsc);
  printf("社会の点数と重みを入力してください：");
  scanf("%d%d",&soc,&gso);

  g_total = jap*gj+math*gm+eng*ge+sci*gsc+soc*gso;
  g_ave = (double)g_total/(gj+gm+ge+gsc+gso);/*キャストをしないで実行すると重み付き平均点は71と整数で表されます。*/

  printf("５教科の重み付き合計点は %d　点で、重み付き平均点は　%g 点です。\n",g_total,g_ave);
}
