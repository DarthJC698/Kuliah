#include<stdio.h>

long long binarySearch(long long arr[], long long search, long long low1, long long high1){
    long long result = -2;
    long long low = low1;
    long long high = high1-1;
    while(low<=high){
        long long mid  = low + (high-low)/2;
        // printf("mid %lld\n", mid);
        if(arr[mid]<=search){
            // printf("array %lld at %lld >= search %lld\n", arr[mid], mid, search);
            result = mid;
            low = mid+1;

        }
        else{
            high = mid-1;
        }
    }
    return result;
    // 1 2 3 4 5 6 7; 5
}

int main(){
    long long n;
    scanf("%lld", &n);
    long long arr[n+5];


    long long sum[n+5];

    for (long long i = 0; i < n; i++)
    {
        scanf("%lld", &arr[i]);
        sum[i]=arr[i];
        if (i < 1) continue;
        sum[i]+=sum[i-1];
    }

    // for (long long i = 0; i < n; i++)
    // {
    //     printf(" %lld", sum[i]);
    // }
    // printf("\n");

    int q;
    scanf("%d", &q);

    for (int i = 0; i < q; i++)
    {
        long long question;
        scanf(" %lld", &question);
        long long answer = binarySearch(sum, question, 0, n);
        printf("Case #%d: %lld\n", i+1, answer+1);

    }
    
    
    
}