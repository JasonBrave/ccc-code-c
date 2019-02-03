#include <stdio.h>
int main(){
    int d,ds,i;
    puts("Enter day:");
    scanf("%d",&d);
    puts("Enter the number of days in the month:");
    scanf("%d",&ds);
    puts("Sun Mon Tue Wed Thr Fri Sat");
    for(i=0;i<d-1;i++){
        printf("    ");
    }
    for(i=1;i<=ds;i++){
        printf("%3d",i);
        if(d==7){
            d=1;
            putchar('\n');
        }else{
            putchar(' ');
            d++;
        }
    }
    putchar('\n');
    return 0;
}
