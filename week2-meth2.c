#include<stdio.h>
int main(){
  int i,a[3],max=0;
  scanf("%d %d %d",&a[0],&a[1],&a[2]);

  for(i=0;i<3;i++){
    if(a[i]>=max){
      max = a[i];
    }   
  }
  printf("%d",max);
  return 0;
}