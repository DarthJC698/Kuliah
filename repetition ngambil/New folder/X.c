#include <stdio.h>
int main(){
    long long int n, ans;
    scanf("%lld",&n);
    ans=1;

    while(n--){
        ans*=2;
        ans+=1;
    }
    printf("%lld\n",ans);
}