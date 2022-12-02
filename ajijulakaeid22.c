
#include <stdio.h>
int main(){
int num;
int div=1;
int cnt=1;
int sum=0;
scanf("%d",&sum);

while(div<=num){
    if(num%div==0){
        printf("%d/n",div);
        cnt+=1;
        sum=sum+div;
    }
    else{
    }
    div++;
    cnt++;
}
}
