#include <stdio.h>
int main(){
    int cache,total=0;
    int c[4][5]={
        {0,461,431,420,0},
        {0,100,57,70,0},
        {0,130,160,118,0},
        {0,167,266,75,0}
    };
    puts("Welcome to Chip's Fast Food Emporium");
    printf("Please enter a burger choice:");
    scanf("%d",&cache);
    total+=c[0][cache];
    printf("Please enter a side order choice:");
    scanf("%d",&cache);
    total+=c[1][cache];
    printf("Please enter a drink choice:");
    scanf("%d",&cache);
    total+=c[2][cache];
    printf("Please enter a dessert choice:");
    scanf("%d",&cache);
    total+=c[3][cache];
    printf("Your total Calorie count is %d.\n",total);
    return 0;
}
