#include <stdio.h>
int main(){
int n;
int val;
int sum;
scanf("%d",&n);
for(val=1,sum=0;val<=20;sum=sum+val,val++){
    printf("%d/n",sum);
}
}
