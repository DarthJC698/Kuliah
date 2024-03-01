#include <stdio.h>

long long int arr[100];

long long int f(long long int n) {
    if (n == 1) {
        return arr[n] = 0;
    } else if (n == 2) {
        return arr[n] = 1;
    } else {
        if(arr[n] != 0) {
            return arr[n];
        } else {
            return arr[n] = f(n - 1) + f(n - 2);
        }
    }
}

int main() {
    int testcase;
    scanf(" %d", &testcase);
    for (int i = 0; i < testcase; i++) {
        long long int n;
        scanf(" %lld", &n);
        printf("Case #%d: %lld\n", i + 1, f(n));
    }
}