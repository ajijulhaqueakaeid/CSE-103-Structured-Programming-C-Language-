#include <stdio.h>
int main(){
int n;
int val;
int cnt;
int sum;

scanf("%d",&n);
for(val=1,cnt=1,sum=0;cnt<=n;sum=sum+val,val++,cnt++){
    printf("%d/n",sum);
}
}
