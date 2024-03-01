#include <stdio.h>
int main(){
    int start,tc;
    scanf("%d %d",&start,&tc);
    int total=0;
    tc+=1;
    while(tc--){
        total+=start;
        printf("%d\n", start);
        start++;
    }
    return 0;
}