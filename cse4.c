#include<stdio.h>
int main()
{
    int first_even=2,i=1,n;
    scanf("%d",&n);
    while(i<=n){
        printf("%d\n",first_even);
        first_even=first_even+2;
        i++;
    }
}
