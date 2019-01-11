#include <stdio.h>
int main(){
    int speedlimit,carspeed,overspeed;
    printf("Enter the speed limit:");
    scanf("%d",&speedlimit);
    printf("Enter the recorded speed of the car:");
    scanf("%d",&carspeed);
    overspeed=carspeed-speedlimit;
    if(overspeed<=0){
        puts("Congratulations, you are within the speed limit!");
    }else if((overspeed>=1)&&(overspeed<=20)){
        puts("You are speeding and your fine is $100.");
    }else if((overspeed>=21)&&(overspeed<=30)){
        puts("You are speeding and your fine is $270.");
    }else{
        puts("You are speeding and your fine is $500.");
    }
    return 0;
}
