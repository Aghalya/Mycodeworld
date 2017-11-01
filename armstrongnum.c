#include <stdio.h>
#include <math.h>
int main()
{
    int num1,num2,i,temp1,temp2,r,n=0,result=0;
    scanf("%d,%d",&num1,&num2);
    for(i=num1+1;i<num2;++i) {
        temp2=i;
        temp1=i;
        while(temp1!=0) {
            temp1/=10;
            ++n;
        }
        while (temp2!=0) {
            r=temp2%10;
            result+=pow(r,n);
            temp2/=10;
        }
        if (result==i) 
            printf("%d\n",i);
        n=0;
        result=0;
    }
    return 0;
}
