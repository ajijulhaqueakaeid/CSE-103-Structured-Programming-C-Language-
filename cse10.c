#include<stdio.h>
int main()
{
    int i=1,sum=0,t=1,n;
    scanf("%d",&n);
    while(i<=n)
    {
        sum=sum+(t*t);
        t++;
        i++;
    }
    printf("%d\n",sum);
}
