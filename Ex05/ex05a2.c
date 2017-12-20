#include <stdio.h>

main () {

int   input;
int   count = 0;

 while(1){

   printf("奇数は%d回入力されています．正の整数を入力して下さい．\n", count);

   scanf("%d", &input );
   if(input/2!=0){
     count=count + input%2;
   }

   if(count==4) break;

 }

 printf("4回奇数が入力されました．プログラムを終了します．\n");

}
