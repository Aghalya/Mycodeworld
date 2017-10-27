#include<stdio.h>
int main() {
  int input,output=0;
  scanf("%d",&input);
  while(input>=0) {
    output+=input;
    input--;
  }
  printf("%d",output);
  return 0;
}
