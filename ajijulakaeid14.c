#include <stdio.h>
int main(){
int n;
int val;
int sum;
scanf("%d",&n);
for(val=1,sum=0;val<=21;sum=sum+val,val+=2){
    printf("%d\n",sum);
}
}
