#include <stdio.h>
int main(){
    int font[10][7]={
        {1,1,1,0,1,1,1},
        {0,0,1,0,0,1,0},
        {1,0,1,1,1,0,1},
        {1,0,1,1,0,1,1},
        {0,1,1,1,0,1,0},
        {1,1,0,1,0,1,1},
        {1,1,0,1,1,1,1},
        {1,0,1,0,0,1,0},
        {1,1,1,1,1,1,1},
        {1,1,1,1,0,1,1}
    };
    int n;
    puts("Enter a digit between 0 and 9:");
    scanf("%d",&n);
    if(font[n][0]==1){
        puts(" ***");
    }
    if((font[n][1]==1)&&(font[n][2]==0)){
        puts("*\n*\n*");
    }else if((font[n][1]==0)&&(font[n][2]==1)){
        puts("    *\n    *\n    *");
    }else{
        puts("*   *\n*   *\n*   *");
    }
    if(font[n][3]==1){
        puts(" ***");
    }else{
        putchar('\n');
    }
    if((font[n][4]==1)&&(font[n][5]==0)){
        puts("*\n*\n*");
    }else if((font[n][4]==0)&&(font[n][5]==1)){
        puts("    *\n    *\n    *");
    }else{
        puts("*   *\n*   *\n*   *");
    }
    if(font[n][6]==1){
        puts(" ***");
    }
    return 0;
}
