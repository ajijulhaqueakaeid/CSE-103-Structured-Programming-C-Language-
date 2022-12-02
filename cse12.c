#include<stdio.h>
int main()
{
    int n,i=1,sum=0;
    scanf("%d",&n);
    while(i<=n)
{
    if(n%i==0){
        sum=sum+1;
    }
        i++;
    }
    printf("%d",sum);
}
