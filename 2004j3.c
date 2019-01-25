#include <stdio.h>
#include <string.h>
int main(){
    char adj[5][10],noun[5][10];
    int as,ns,ai,ni;
    scanf("%d\n",&as);
    scanf("%d",&ns);
    fflush(stdin);
    for(ai=0;ai<as;ai++){
        fgets(adj[ai],10,stdin);
        strtok(adj[ai],"\n");
    }
    for(ni=0;ni<ns;ni++){
        fgets(noun[ni],10,stdin);
        strtok(noun[ni],"\n");
    }
    for(ai=0;ai<as;ai++){
        for(ni=0;ni<ns;ni++){
            printf("%s as %s\n",adj[ai],noun[ni]);
        }
    }
    return 0;
}
