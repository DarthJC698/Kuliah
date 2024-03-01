#include <stdio.h>

int main(){
    int k,n;
    scanf("%d %d",&k,&n);
    for(int i=1;i<=k;i++){
        for(int j=1;j<=k;j++){
            printf("#");
        }
        puts("");
    }
    puts("");
    for(int i=1;i<=k;i++){
        for(int j=1;j<=k;j++){
            printf("%c",(i%n==0)?'#':'.');
        }
        puts("");
    }
    puts("");
    for(int i=1;i<=k;i++){
        for(int j=1;j<=k;j++){
            printf("%c",(j%n==0)?'#':'.');
        }
        puts("");
    }
}