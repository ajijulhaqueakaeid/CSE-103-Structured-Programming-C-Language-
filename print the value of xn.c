#include <stdio.h>

int main(){
    int x,n;
    int mul=1;
    int cnt=1;
    printf("enter the value of x");
    scanf("%d",&x);

    printf("enter the value of n");
    scanf("%d",&n);

    while(cnt<=n){
    mul=mul*x;

    cnt++;
    };

    printf("%d",mul);
}
