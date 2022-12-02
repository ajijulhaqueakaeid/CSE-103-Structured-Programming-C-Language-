#include<stdio.h>

int main()
{
    int c;
    printf("enter the number: ");
    scanf("%d",&c);

    while(c<=10)
    {
        printf("%d\n",c);
        c++;
    }
    return 0;
}
