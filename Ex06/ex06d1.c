#include <stdio.h>

main(){
  
  int i,j,n,r,res,count=0,n_kai=1,r_kai=1;
  int k,l;
  
  printf("nを入力してください：");
  scanf("%d",&n);
  
  if (0<n&&n<13){
    for (k=1;k<=n;k++){
      for (l=1;l<=n;l++){
	count = 0;
	n_kai = 1;
	r_kai = 1;
	for(i=l;count<k;i--){
	  n_kai*=i;
	  count++;
	}
	for(j=k;j>0;j--){
	  r_kai*=j;
	}
  
	res = n_kai/r_kai;
	printf("%3d",res);
      }
      printf("\n");
    }
  }
  else printf("nが範囲外です。\n");
}

