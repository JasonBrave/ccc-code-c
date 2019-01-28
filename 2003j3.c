#include <stdio.h>
int main(){
    int dice,place=1;
    while(1){
        puts("Enter sum of dice:");
        scanf("%d",&dice);
        if(dice==0){
            puts("You Quit!");
            return 0;
        }
        if(place+dice<=100){
            place+=dice;
            place=(place==54)?19:place;
            place=(place==90)?48:place;
            place=(place==99)?77:place;
            place=(place==9)?34:place;
            place=(place==40)?64:place;
            place=(place==67)?86:place;
        }
        printf("You are now on square %d\n",place);
        if(place==100){
            puts("You Win!");
            return 0;
        }
    }
}
