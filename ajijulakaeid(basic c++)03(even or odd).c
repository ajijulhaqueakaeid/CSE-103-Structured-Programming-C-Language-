#include <stdio.h>
int main()
{
    int num;
    printf("please enter any number to define even or odd: ");
    scanf("%d",&num);

    if(num%2==0){
        printf("the number is even");
    }
    else{
        printf("the number is odd");
    }
}
