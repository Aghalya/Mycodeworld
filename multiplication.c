#include<stdio.h>
int main() {
  int n,i;
  scanf("%d",&n);
  for(i=1;i<=n;i++) {
    printf("%d * %d = %d",n,i,n*i);
  }
  return 0;
}
