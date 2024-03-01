#include <stdio.h>

int main(){
    int n,now,before=0;
    scanf("%d",&n);getchar();
    for(int i=1;i<=n;i++){
        scanf("%d",&now);getchar();
        
        if(before>=now){
            printf("%d ",before);
            before=now;
        }
        else before=now;
        if(i==n)printf("%d\n",now);
    }
    
    
    return 0;
}