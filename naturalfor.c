#include<stdio.h>
int main() {
  int input,output=0,i;
  scanf("%d",&input);
  for(i=1;i<=input;i++)
    output+=i;
  printf("%d",output);
  return 0;
}
