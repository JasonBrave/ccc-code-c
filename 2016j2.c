#include <stdio.h>
int main(){
    int table[4][4];
    int i;
    int sum[8];
    for(i=0;i<3;i++){
        scanf("%d %d %d %d\n",&table[i][0],&table[i][1],&table[i][2],&table[i][3]);
    }
    scanf("%d %d %d %d",&table[3][0],&table[3][1],&table[3][2],&table[3][3]);
    for(i=0;i<4;i++){
        sum[i]=table[i][0]+table[i][1]+table[i][2]+table[i][3];
    }
    for(i=0;i<4;i++){
         sum[i+4]=table[0][i]+table[1][i]+table[2][i]+table[3][i];
    }
    int issame=1;
    int base=sum[0];
    for(i=1;i<8;i++){
        if(base!=sum[i]){
            issame=0;
        }
    }
    if(issame){
        puts("magic");
    }else{
        puts("not magic");
    }
}
