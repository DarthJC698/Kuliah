#include<stdio.h>


int main(){
    long long a, b;
    FILE *file = fopen("testdata.in", "r");

    fscanf( file, " %lld %lld", &a, &b);
    printf("%lld\n", a+b);
}