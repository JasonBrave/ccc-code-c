#include <stdio.h>
#include <string.h>
int friendplace(int placeofexists);
int friendexists[101];
int thisturnlist[101];
int main()
{
    int k,m,i,ii,r;
    scanf("%d\n",&k);
    scanf("%d",&m);
    scanf("\n");
    for(i=0;i<=k;i++){
        friendexists[i]=1;
    }
    for(i=0;i<m;i++){
        if(i!=m-1){
        scanf("%d\n",&r);
        }else{
            scanf("%d",&r);
        }
        memcpy(thisturnlist,friendexists,(k+1)*(sizeof(int)));
        for(ii=1;ii*r<=k;ii++){
            friendexists[friendplace(ii*r)]=0;
        }
    }
    for(i=1;i<=k;i++){
        if(friendexists[i]){
            printf("%d\n",i);
        }
    }
    return 0;
}

int friendplace(int placeofexists){
    int i,n=0;
    for(i=1;n!=placeofexists;i++){
        if(thisturnlist[i]){
            n++;
        }
    }
    return i-1;
}
