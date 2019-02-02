#include <stdio.h>
int main(){
    char str[20];
    int c,d,h,s,i,ii,cv,dv,hv,sv;
    char cs[14],ds[14],hs[14],ss[14];
    puts("Enter cards:");
    fgets(str,20,stdin);
    ii=0;
    for(i=1;str[i]!='D';i++){
        cs[ii]=str[i];
        ii++;
    }
    cs[ii]='\0';
    c=ii;
    if(c==0){
        cv=3;
    }else if(c==1){
        cv=2;
    }else if(c==2){
        cv=1;
    }else{
        cv=0;
    }
    ii=0;
    i++;
    for(;str[i]!='H';i++){
        ds[ii]=str[i];
        ii++;
    }
    ds[ii]='\0';
    d=ii;
    if(d==0){
        dv=3;
    }else if(d==1){
        dv=2;
    }else if(d==2){
        dv=1;
    }else{
        dv=0;
    }
    ii=0;
    i++;
    for(;str[i]!='S';i++){
        hs[ii]=str[i];
        ii++;
    }
    hs[ii]='\0';
    h=ii;
    if(h==0){
        hv=3;
    }else if(h==1){
        hv=2;
    }else if(h==2){
        hv=1;
    }else{
        hv=0;
    }
    ii=0;
    i++;
    for(;str[i]!='\n';i++){
        ss[ii]=str[i];
        ii++;
    }
    ss[ii]='\0';
    s=ii;
    if(s==0){
        sv=3;
    }else if(s==1){
        sv=2;
    }else if(s==2){
        sv=1;
    }else{
        sv=0;
    }
    puts("Cards Dealt               Points");
    printf("Clubs ");
    for(i=0;i<c;i++){
        printf(" %c",cs[i]);
        cv+=(cs[i]=='A')?4:0;
        cv+=(cs[i]=='K')?3:0;
        cv+=(cs[i]=='Q')?2:0;
        cv+=(cs[i]=='J')?1:0;
    }
    printf("            %d\n",cv);
    printf("Diamonds ");
    for(i=0;i<d;i++){
        printf(" %c",ds[i]);
        dv+=(ds[i]=='A')?4:0;
        dv+=(ds[i]=='K')?3:0;
        dv+=(ds[i]=='Q')?2:0;
        dv+=(ds[i]=='J')?1:0;
    }
    printf("            %d\n",dv);
    printf("Hearts ");
    for(i=0;i<h;i++){
        printf(" %c",hs[i]);
        hv+=(hs[i]=='A')?4:0;
        hv+=(hs[i]=='K')?3:0;
        hv+=(hs[i]=='Q')?2:0;
        hv+=(hs[i]=='J')?1:0;
    }
    printf("            %d\n",hv);
    printf("Spades ");
    for(i=0;i<s;i++){
        printf(" %c",ss[i]);
        sv+=(ss[i]=='A')?4:0;
        sv+=(ss[i]=='K')?3:0;
        sv+=(ss[i]=='Q')?2:0;
        sv+=(ss[i]=='J')?1:0;
    }
    printf("            %d\n",sv);
    printf("                    Total %d\n",cv+dv+hv+sv);
    return 0;
}
