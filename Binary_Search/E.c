#include<stdio.h>

long long find(long long arr[], long long Mi, int n){
long long sum = 0, start = 0, max_length = -1;
for (int end = 0; end < n; end++)
{
    sum+=arr[end];
    while(sum>Mi){
        sum-=arr[start];
        start++;
    }
    max_length = (end-start+1>max_length&&end-start+1!=0) ? end-start+1 : max_length;
}
return max_length;
}

int main(){
    int n;
    scanf("%d", &n);
    long long arr[n+5];
    
    for (int i = 0; i < n; i++)
    {
        scanf("%lld", &arr[i]);
    }

    int q;
    scanf("%d", &q);

    
    for (int i = 0; i < q; i++)
    {
        long long question;
        scanf("%lld", &question);
        long long sum = 0;
        int max = -1;
        
        printf("Case #%d: %lld\n",i+1 ,find(arr, question, n));
    }
    
    
    
    
}