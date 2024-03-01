#include <stdio.h>

int main(){
    int tc;
    long long int items,total,temp;
    scanf("%d",&tc);getchar();
    for(int i=1;i<=tc;i++){
        total=0;
        scanf("%lld",&items);getchar();
        while(items--){
            scanf("%lld",&temp);getchar();
            total+=temp;
        }
        printf("Case #%d: %lld\n",i,total);
    }
}