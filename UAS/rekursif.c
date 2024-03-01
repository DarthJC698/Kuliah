#include<stdio.h>

int count = 0;

int f2(int n){
    if(n>0){
        return f2(n-1)+n;
    }
}

int main(){
    int N, D;
    scanf(" %d %d", &N, &D);
    int number = D;
    while(N>0){
        number = f2(number);
        N--;
    }
    printf("%d\n", number);
}