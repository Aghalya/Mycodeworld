#include <stdio.h>
int main() {
	int number,num=0,i=0,ri=0;
	scanf("%d",&number);
	i=number;
	while (number!=0) {
		num=number%10;
		ri=ri*10+num;
		number=number/10;
	}
	if(i==ri)
		printf("Palindrome");
	else
		printf("Not Palindrome");
	return 0;
}
