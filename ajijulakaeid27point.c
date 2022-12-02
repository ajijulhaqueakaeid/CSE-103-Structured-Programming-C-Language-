
#include <stdio.h>

struct Point{
    float x;
    float y;
};

struct Point find_mid_point(struct Point a1,struct Point b1){

    struct Point mid;

    mid.x=a1.x+b1.x/2;
    mid.y=a1.y+b1.y/2;

    return mid;
}

float find_distance(struct Point p1, struct Point p2){
    float a,b,d;
    for(a=pow(p1x-p2x,2)){
            printf("%d",&a);
            (b=pow(p1y-p2y,2)){
                printf("%d",&b);
            d=sqrt(a+b);
            }

            return d;


}
}

float find_area_of_triangle(struct Point p1,struct Point p2,struct Point p3){
    //find the area of the triangle formed by the three Points


}

float can_form_circle(struct Point p1, struct Point p2, struct Point p3){
    // check if the 3 points can form a circle
    // the equation of a circle is : x^2+y^2+2gx+2fy+c=0;
    //find the values of g, f and c in this equation and then
    //print the value of g, f and c



}












int main(){
    struct Point p1,p2;

    p1.x=10;
    p1.y=10;

    p2.x=40;
    p2.y=60;


    struct Point mid=find_mid_point(p1,p2);
    printf("%f %f\n",mid.x,mid.y);
