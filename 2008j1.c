#include <stdio.h>
int main(){
    float w,h,bmi;
    printf("Enter weight:");
    scanf("%f",&w);
    printf("Enter height:");
    scanf("%f",&h);
    bmi=w/h/h;
    if(bmi>25){
        puts("Overweight");
    }else if(bmi<18.5){
        puts("Underweight");
    }else{
        puts("Normal weight");
    }
    return 0;
}
