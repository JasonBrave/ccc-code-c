#include <stdio.h>
int friendwaittotal[101];
int friendpresent[101];
int friendstatus[101];
int main(){
    int m,i,texttime=0;
    int friendid;
    char action;
    scanf("%d\n",&m);
    for(i=0;i<m;i++){
        if(i==m-1){
            scanf("%c %d",&action,&friendid);
        }else{
            scanf("%c %d\n",&action,&friendid);
        }
        if(action=='R'){
            friendstatus[friendid]=texttime;
            texttime++;
            friendpresent[friendid]=1;
        }else if(action=='S'){
            friendwaittotal[friendid]+=texttime-friendstatus[friendid];
            friendstatus[friendid]=0;
            texttime++;
        }else{
            texttime+=friendid-1;
        }
    }
    for(i=1;i<=100;i++){
        if(friendpresent[i]){
            if(friendstatus[i]==0){
                if(friendwaittotal[i]!=0){
                    printf("%d %d\n",i,friendwaittotal[i]);
                }else{
                    printf("%d -1\n",i);
                }
            }else{
                printf("%d -1\n",i);
            }
        }
    }
    return 0;
}
