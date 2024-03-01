#include <stdio.h>
int main(){
    int t;
    long long int x,p;
    scanf("%d",&t);getchar();
    while(t--){
        scanf("%lld %lld",&x,&p);getchar();
        x=(x>>p)&1;
        printf("%lld\n",x);
    }
}