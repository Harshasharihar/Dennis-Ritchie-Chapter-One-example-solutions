#include<stdio.h>

int main(){
    int c,tabs=0;
    while((c=getchar())!=EOF){
        if(c=='\n'){
            ++tabs;
        }

    }
    printf("%d\n",tabs);

}



