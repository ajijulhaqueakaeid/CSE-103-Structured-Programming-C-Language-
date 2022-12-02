#include<stdio.h>
int main()
{
    int first_odd=1,n,i=1;
    scanf("%d",&n);
    while(i<=n){
        printf("%d\n",first_odd);
        first_odd=first_odd+2;
        i++;
    }
}
