#include <stdio.h>
int main(){
    int antennas,eyes;
    printf("How many antennas?");
    scanf("%d",&antennas);
    printf("How many eyes?");
    scanf("%d",&eyes);
    if((antennas>=3)&&(eyes<=4)){
        puts("TroyMartian");
    }
    if((antennas<=6)&&(eyes>=2)){
        puts("VladSaturnian");
    }
    if((antennas<=2)&&(eyes<=3)){
        puts("GraemeMercurian");
    }
    return 0;
}
