#include <stdio.h>
int main(){
    char icon[3][3]={{'*','x','*'},{' ','x','x'},{'*',' ','*'}};
    int x,y,i,ii,scale;
    scanf("%d",&scale);
    for(x=0;x<3;x++){
        for(i=0;i<scale;i++){
            for(y=0;y<3;y++){
                for(ii=0;ii<scale;ii++){
                    putchar(icon[x][y]);
                }
            }
            putchar('\n');
        }
    }
    return 0;
}
