#include <stdio.h>
#include <string.h>
int main(){
    char pl[5]={'A','B','C','D','E'};
    char pln[5];
    int i,b,n;
    while(1){
        printf("Button number:");
        scanf("%d",&b);
        printf("Number of presses:");
        scanf("%d",&n);
        for(i=0;i<n;i++){
            switch(b){
                case 1:
                    pln[0]=pl[1];
                    pln[1]=pl[2];
                    pln[2]=pl[3];
                    pln[3]=pl[4];
                    pln[4]=pl[0];
                    break;
                case 2:
                    pln[0]=pl[4];
                    pln[1]=pl[0];
                    pln[2]=pl[1];
                    pln[3]=pl[2];
                    pln[4]=pl[3];
                    break;
                case 3:
                    pln[0]=pl[1];
                    pln[1]=pl[0];
                    pln[2]=pl[2];
                    pln[3]=pl[3];
                    pln[4]=pl[4];
                    break;
                case 4:
                    printf("%c %c %c %c %c\n",pl[0],pl[1],pl[2],pl[3],pl[4]);
                    return 0;
            }
            memcpy(pl,pln,5);
        }
    }
}
