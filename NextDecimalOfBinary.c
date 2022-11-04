#include<stdio.h>
#include<stdlib.h>
int main(){
  long long int X;
  int base=1,d=0;
  scanf("%lld",&X);
  int k=X;
  while(X>0){
    int rem=X%10;
    d += rem*base;
    X/=10;
    base*=2;
  }
  int t=d+1;
  int a[1000000],i;
  for(i=0;t>0;i++){
    a[i]=t%2;
    t/=2;
  }
  for(i=i-1;i>=0;i--){
    printf("%lld",a[i]);
  }
  return 0;
}
