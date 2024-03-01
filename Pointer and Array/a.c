#include<stdio.h>


int main(){
    int n;
    scanf(" %d", &n);
    
    int arr[n+5];

    for (int i = 0; i < n; i++)
    {
        scanf(" %d",&arr[i]);
    }
    
    scanf(" %d", &n);
    for (int i = 1; i <= n; i++)
    {
        int location[2];
        scanf(" %d %d", &location[0], &location[1]);
        location[0]--;
        location[1]--;
        int sum = 0;
        for (int j = location[0]; j <= location[1]; j++)
        {
            sum+=arr[j];
        }
        printf("Case #%d: %d\n", i, sum);
    }
    




    
}