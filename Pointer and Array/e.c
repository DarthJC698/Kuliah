#include<stdio.h>

int main(){
    int testcase;
    scanf(" %d", &testcase);

    for (int i = 0; i < testcase; i++)
    {
        int n;
        scanf(" %d", &n);

        long long arr[n+5][n+5];
        for (int j = 0; j < n; j++)
        {
            for (int k = 0; k < n; k++)
            {
                scanf(" %lld", &arr[j][k]);
                // printf(" %lld", arr[j][k]);
            }
            // printf("\n");
        }

        long long result[502]={0};
        for (int j = 0; j < n; j++)
        {
            for (int k = 0; k < n; k++)
            {
                result[j]+=arr[k][j];   
                // printf("result = %d\n", result[j]);
            }
        }
        
        printf("Case #%d:", i+1);
        for (int j = 0; j < n; j++)
        {
            printf(" %lld", result[j]);
        }
        printf("\n");
    }
    
}