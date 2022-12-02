#include <stdio.h>
int main(){
int sum,val,cnt;
sum=0;
val=1;
cnt=1;
while(cnt<=9){
    sum=sum+val;
    val=val+1;
    cnt++;
    printf("%d",cnt);
    }
printf("%d",cnt);
}
