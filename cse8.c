#include<stdio.h>
int main()
{
    int n,i=1,odd=1,sum=0;
    scanf("%d",&n);
    while(i<=n){
        sum=sum+odd;
        odd=odd+2;
        i++;
    }
    printf("%d\n",sum);
}
