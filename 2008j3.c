#include <stdio.h>
#include <math.h>
int keyid(char c);
char keyboard[31]="ABCDEFGHIJKLMNOPQRSTUVWXYZ -.\n";
int main(){
    int i,moves=0;
    char keys[42];
    fgets(keys,42,stdin);
    moves+=abs(keyid(keys[0])/6-keyid('A')/6);
    moves+=abs(keyid(keys[0])%6-keyid('A')%6);
    for(i=0;keys[i]!='\n';i++){
        moves+=abs(keyid(keys[i+1])/6-keyid(keys[i])/6);
        moves+=abs(keyid(keys[i+1])%6-keyid(keys[i])%6);
    }
    printf("%d\n",moves);
    return 0;
}

int keyid(char c){
    int i;
    for(i=0;i<31;i++){
        if(c==keyboard[i]){
            return i;
        }
    }
}
