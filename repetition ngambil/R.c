#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    long long int tc,n,min;
    scanf("%lld",&tc);getchar();
    for(int i=1;i<=tc;i++){
        
        scanf("%lld",&n);getchar();
        long long int* nums=(long long int*)calloc(n,sizeof(long long int));
        for(int j=0;j<n;j++){
            scanf("%lld",&nums[j]);getchar();
        }
        min=abs(nums[0]-nums[1]);
        for(int j=0;j<(n-1);j++){
            min=(min>abs(nums[j]-nums[j+1]))?abs(nums[j]-nums[j+1]):min;
        }
        printf("Case #%d: %lld\n",i,min);

    }
}