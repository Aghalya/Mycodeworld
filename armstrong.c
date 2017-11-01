#include<stdio.h>
int main() {
  int num,n=0,on,r,result;
  scanf("%d",&num);
  on=num;
  while(num!=0) {
    num=num/10;
    n++;
  }
  num=on;
  while(num!=0) {
    r=num%10;
    result+=pow(r,n);
    num/=10;
  }
  if(on==result)
    printf("Armstrong Number");
  else
    printf("Not an Armstrong Number");
  return 0;
}
