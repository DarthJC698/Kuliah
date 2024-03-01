#include<stdio.h>

long long int prefix[100] = {0}; 

long long int F(int x) {
    if (x <= 0) {
        return 0;
    } 
    else if (prefix[x] != 0) {
        return prefix[x];
    }
    else{
        long long int count = F(x-1);
        int i;

        for (i = 1; i <= x; i++) {
            count += 1;
        }

        count += F(x - 2);
        prefix[x] = count;
        return count;
    }
}

int main(){
    printf("%lld\n", F(83));
}