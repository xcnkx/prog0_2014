#include <stdio.h>

main(){
  int y;

  printf("西暦４桁を入力してください（例：２０１２）\n");
  scanf("%d",&y);
 
  if(y%4!=0) printf("閏年ではない\n");
  else if(y%100!=0) printf("閏年である\n");
  else if(y%400!=0) printf("閏年ではない\n");
  else printf("閏年である\n");
}
