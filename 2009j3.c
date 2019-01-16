#include <stdio.h>
#include <string.h>
int main(){
    int h=0,m=0;
    char inp[6];
    fgets(inp,6,stdin);
    if(strlen(inp)==3){
        sscanf(inp,"%2d",&m);
    }else if(strlen(inp)==5){
        sscanf(inp,"%2d%2d",&h,&m);
    }else{
        sscanf(inp,"%1d%2d",&h,&m);
    }
    printf("%.0d%02d in Ottawa\n",h,m);
    h=h-3;
    h=h<0?h+24:h;
    printf("%.0d%02d in Victoria\n",h,m);
    h++;
    h=h>23?h-24:h;
    printf("%.0d%02d in Edmonton\n",h,m);
    h++;
    h=h>23?h-24:h;
    printf("%.0d%02d in Winnipeg\n",h,m);
    h++;
    h=h>23?h-24:h;
    printf("%.0d%02d in Toronto\n",h,m);
    h++;
    h=h>23?h-24:h;
    printf("%.0d%02d in Halifax\n",h,m);
    m=m+30;
    if(m>59){
        m=m-60;
        h++;
    }
    h=h>23?h-24:h;
    printf("%.0d%02d in St. John's\n",h,m);
    return 0;
}
