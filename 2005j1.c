#include <stdio.h>
int main(){
    int daytime,evening,weekend;
    float plana,planb;
    puts ("Number of daytime minutes?");
    scanf ("%d",&daytime);
    puts ("Number of evening minutes?");
    scanf ("%d",&evening);
    puts ("Number of weekend minutes?");
    scanf ("%d",&weekend);
    if(daytime>100){
        plana=0.25*(daytime-100);
    }
    plana+=0.15*evening;
    plana+=0.20*weekend;
    if(daytime>250){
        planb=0.45*(daytime-250);
    }
    planb+=0.35*evening;
    planb+=0.25*weekend;
    printf("Plan A costs %.2f\n",plana);
    printf("Plan B costs %.2f\n",planb);
    if(plana<planb){
        puts("Plan A is cheapest.");
    }else if(planb<plana){
        puts("Plan B is cheapest.");
    }else{
        puts("Plan A and B are the same price.");
    }
    return 0;
}
