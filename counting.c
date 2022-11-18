#include<stdio.h>

int main(){
  int c,space=0;
  while((c=getchar())!=EOF){
    printf("%c",c);
    if(c>='\t'){
      c=' ';
      printf("%c",c);
    }
  }
  printf("%d\n",space);
}
