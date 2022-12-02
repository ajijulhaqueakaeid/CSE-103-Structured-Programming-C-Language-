#include<stdio.h>
int main()
{
    int roll,name,mark,physics,chemistry,computer,total,percentage;
    printf("Enter the roll: ");
    printf("Enter the name: ");
    scanf("%d %d",&roll,&name);

    printf("Enter the mark of physics :");
    scanf("%d",&physics);
    printf("Enter the marks of chemistry: ");
    scanf("%d",&chemistry);
    printf("Enter the mark of computer: ");
    scanf("%d",&computer);

    printf("roll=%d",roll);
    printf("name=%c",name);
    printf("physics,chemistry,computer=%d%d%d",physics,chemistry,computer);

    total=physics+chemistry+computer;
    percentage=total/3;

    printf("total=%d",total);
    printf("percentage=%d",percentage);

    if(percentage>80)
    {
        printf("mark=first division");
    }
    return 0;
}
