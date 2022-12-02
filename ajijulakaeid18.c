#include <stdio.h>
int main(){
int n;
int val;
printf("enter the number of= ");
scanf("%d",&n);
for(val=2;val<=n;val=val+2){
    printf("%d\n",val);
}
}
