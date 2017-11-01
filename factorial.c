#include<stdio.h>
int main() {
  int num,i,fact=1;
  scanf("%d",&num);
  if(num<0)
    printf("Factorial doesn't exist");
  else {
    for(i=1;i<=num;i++)
      fact*=i;
    printf("%d",fact);
  }
  return 0;
}
