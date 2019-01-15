#include <stdio.h>
int main(){
    int digits[13]={9,7,8,0,9,2,1,4,1,8};
    int i,sum=0;
    printf("Digit 11?");
    scanf("%d",&digits[10]);
    printf("Digit 12?");
    scanf("%d",&digits[11]);
    printf("Digit 13?");
    scanf("%d",&digits[12]);
    for(i=0;i<=12;i++){
        sum+=(i&1)?digits[i]*3:digits[i];
    }
    printf("The 1-3-sum is %d\n",sum);
    return 0;
}
