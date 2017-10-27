#include<stdio.h>
int main() {
  int input,output=0;
  scanf("%d",&input);
  while(input>=0) {
    output+=input;
    input--;
  }
  return 0;
}
