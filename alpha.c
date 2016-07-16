#include<stdio.h>
int main()
{
  char alpha;
  scanf("%c",&alpha);
  if((alpha>64&&alpha<91) || (alpha>96&&alpha<123))
    printf("Character is alphabet");
  else  
    printf("Character is not an alphabet");
  return 0;  
}
