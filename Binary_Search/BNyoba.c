#include<stdio.h>

double f(double num){
    double total = 1.0/6.0*num*(num+1)*(2*num+1);
    return total;
}

int binarysearch(double search, double low, double high){
    double mid = low + (high-low)/2;
    
    if(low<=high){
        // printf("%lf\n", f(mid));
        if (f(mid)==search){
            return mid;
        }
        else if(f(mid)>search){
            return binarysearch(search, low, mid-1);
        }
        else{
            return binarysearch(search, mid+1, high);
        }
    }
    return mid;
}

int main(){
    double a = 10;
    printf("%d\n", binarysearch(a, 0, 10));
}