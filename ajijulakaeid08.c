#include <stdio.h>

int main(){
    int mark;
    scanf("%d",&mark);

    if(mark<0){
        printf("not a valid mark\n");
    }
    else if(mark<100){
        printf("a+\n");
    }
    else if(mark<97){
        printf("a+\n");
    }
    else if(mark<96){
        printf("a\n");
    }
    else if(mark<90){
        printf("a\n");
    }
    else if(mark<89){
        printf("a-\n");
    }
    else if(mark<87){
        printf("a-\n");
    }
    else if(mark<86){
        printf("b+\n");
    }
    else if(mark<83){
        printf("b+\n");
    }
    else if(mark<82){
        printf("b\n");
    }
    else if(mark<80){
        printf("b\n");
    }
    else if(mark<79){
        printf("b-\n");
    }
    else if(mark<77){
        printf("b-\n");
    }
    else if(mark<76){
        printf("c+\n");
    }
    else if(mark<73){
        printf("c+\n");
    }
    else if(mark<72){
        printf("c\n");
    }
    else if(mark<70){
        printf("c\n");
    }
    else if(mark<69){
        printf("c-\n");
    }
    else if(mark<67){
        printf("c-\n");
    }
    else if(mark<66){
        printf("d+\n");
    }
    else if(mark<63){
        printf("d+\n");
    }
    else if(mark<62){
        printf("d\n");
    }
    else if(mark<60){
        printf("d\n");
    }
    else if(mark<59){
        printf("f\n");
    }
}
