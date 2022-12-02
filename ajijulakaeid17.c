#include <stdio.h>
int main(){
int n;
int val;
printf("enter the number of= ");
scanf("%d",&n);
for(val=1;val<=n;val+=2){
    printf("%d\n",val);
}
}
