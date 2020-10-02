#include <stdio.h>
int main(void) {
 int p,n,i,m=0,flag=1;
while (printf("Enter your number : ") && scanf("%d",&n)){
  if(n<0) {printf("Is not number prime!!!.\n");
    break;}
  if(n == 1 || n == 0){
    printf("Is not number prime!!!.\n");
    continue;
  }
  for(p=2;p<n;p++){
    if((n%p)==0){
      flag =0;
    }
  }
if(flag == 1)
{
  printf("Is number :%d\n",n);
  
  for(i=1;i<16;i++){
    printf("%d x %d = %d\n",n,i,n*i);
  }
}
else if (flag == 0 || n == 1)
  printf("Is not number prime.\n");
  flag =1;
}
  return 0;
}