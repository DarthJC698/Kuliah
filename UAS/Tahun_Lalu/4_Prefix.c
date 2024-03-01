#include<stdio.h>

long long arr[100] = {-1};

// long long arr[100]={0, 3, 7, 14, 26, 46, 79, 133, 221, 364, }

long long fraktal_B(int x) {


if(arr[x]>0){
    return arr[x];
 }
else if(x<=0){
    return 0;
}
else {
    arr[x]=fraktal_B(x-2) + fraktal_B(x-1) + x;
    return fraktal_B(x-2) + fraktal_B(x-1) + x; 
 }
}

int main(){
    int n;
    scanf(" %d", &n);
    printf("%lld\n", fraktal_B(n));
}