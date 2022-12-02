#include <stdio.h>
int main(){
int num;
int div=1;
int cnt=1;
scanf("%d",&num);

while(div<=num){
    if(num%div==0){
        printf("%d/n",div);
        cnt+=1;
    }
    else{
    }
    div++;
    cnt++;
}
}
