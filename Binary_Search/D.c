#include<stdio.h>

int main(){
    int testcase;
    scanf(" %d\n", &testcase);
    
    for (int i = 0; i < testcase; i++)
    {
        long long max = -1;
        int n;
        long long q;
        scanf(" %d %lld\n", &n, &q);
        long long arr[n+2];
        for (int j = 0; j < n; j++)
        {
            scanf(" %lld", &arr[j]);
        }
        
        for (int j = 0; j < n; j++)
        {
            // long long start = 0;
            // int counter = 0;
            for (int k = j; k<n; k++)
            {
                if(arr[k]>q){
                    break;
                }
                start+=arr[k];
                counter++;
                if(start + arr[k+1]>q){
                    break;
                }
            }
            /* 
            for (j = 0; j < N; j++) { 
            sum = 0; 
            for (k = j; k < N; k++) {
                sum += A[k]; 
                if (sum > M) break; 
                if (k - j + 1 > max) max = k - j + 1; 
            }
            }
            */
            
            if(counter>max){
                max = counter;
            }
        }
        if(!max){
            printf("Case #%d: -1\n", i+1);
            return 0;
        }
        printf("Case #%d: %lld\n", i+1, max);
        
    }
    
}