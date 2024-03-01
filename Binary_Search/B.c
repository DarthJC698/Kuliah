#include <stdio.h>
#define ll long long int

ll f(ll arr){
    ll result = ((arr+1)*((arr*2)+1)*arr)/6;
    return result;
}

ll binarySearch(ll n) {
    ll left = 1, right = 3000000;
    while(left < right) {
        ll mid = left + (right - left)/2;
        if(f(mid) < n) {
            left = mid + 1;
        } else {
            right = mid;
        }
    }
    return right;
}

int main(){
    ll tc;
    scanf(" %lld\n", &tc);

    for (ll i = 0; i < tc; i++)
    {
        long long search;
        scanf("%lld", &search);

        printf("Case #%lld: %lld\n", i+1, binarySearch(search));
    }
    
}