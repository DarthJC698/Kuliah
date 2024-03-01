#include <stdio.h>

int main(){
   int start,count;
   scanf("%d %d",&start,&count);
   for(int i=0;i<=count;i++,start++){
    printf("%d\n",start);
   }
}