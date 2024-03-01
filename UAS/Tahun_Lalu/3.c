#include<stdio.h>

long long binarySearch(long long arr[], long long search, int low, int high){
    int mid = low + (high-low)/2;
    if(low<=high){
        if(arr[mid]!=arr[mid-1] && arr[mid]==search){
            return mid;
        }
        else if(arr[mid]<search)
        {
            return binarySearch(arr, search, mid+1, high);
        }
        else{
            return binarySearch(arr, search, low, mid-1);
        }
    }
    return -2;
}

int main(){
    int n, q;
    scanf(" %d %d", &n, &q);
    long long arr[n+5];

    for (int i = 0; i < n; i++)
    {
        scanf(" %lld", &arr[i]);
    }
    for (int i = 0; i < q; i++)
    {
        long long question=0;
        scanf(" %lld", &question);
        printf("%lld\n", binarySearch(arr, question, 0, n-1)+1);
    }
    
    
}