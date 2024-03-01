#include <stdio.h>
int main(){
    long long int n,res=0,temp;
    scanf("%lld",&n);getchar();
    while(n--){
        scanf("%lld",&temp);getchar();
        res+=(temp>0)?temp:0;
    }
    printf("%lld\n",res);
}