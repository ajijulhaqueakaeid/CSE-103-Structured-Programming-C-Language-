#include<stdio.h>
int main()
{
    int n,i=1,even=2,sum=0;
    scanf("%d",&n);
    while(i<=n){
        sum=sum+even;
        even=even+2;
        i++;
    }
    printf("%d\n",sum);

}
