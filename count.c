#include<stdio.h>

#define OUT 0
#define IN 1

int main(){

    int c,nl,nc,nw,state;
    nc=nw=nl=0;
    state=OUT;
    while((c=getchar())!=EOF){
        ++nc;
        if(c=='\n'){
            ++nl;
        }
        if(c==' '||c=='\t'||c=='\n'){
            state=OUT;
        }
        else if(state==OUT){
            state=IN;
            ++nw;
        }
    }
    printf("%d %d %d\n",nw,nl,nc);
}