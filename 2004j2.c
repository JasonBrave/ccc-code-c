#include <stdio.h>
int main(){
    int a,b,i;
    puts("Enter the current year:");
    scanf("%d",&a);
    puts("Enter a future year:");
    scanf("%d",&b);
    for(i=0;i<=b-a;i++){
        if((i%4==0)&&(i%3==0)&&(i%5==0)){
            printf("All positions change in year %d\n",a+i);
        }
    }
    return 0;
}
