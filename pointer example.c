#include<stdio.h>

int main()
{
    int x,y,*a,*b,temp;

    for(x,y=0;x,y<10;*a=x;*b=y)
    {
        *a=temp;
        *a=*b;
        *b=temp;
    }
     printf("%d=temp",temp);
}
