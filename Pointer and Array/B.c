#include<stdio.h>

void calculate(int n, int res[n+5],int arr1[n+5], int arr2[n+5]){
        for (int k = 0; k < n; k++)
        {
            res[k]=arr1[k]-arr2[k];
        }
    
}

int main(){
    int testcase;
    scanf(" %d", &testcase);

    for (int i = 0; i < testcase; i++)
    {
        int n;
        scanf(" %d", &n);
        int final[n+5];
        int need[n+5];
        int have[n+5];
        for (int k = 0; k < n; k++)
        {
            scanf(" %d", &need[k]);
        }
            
        for (int j = 0; j < n; j++)
        {
            scanf(" %d", &have[j]);
        }

        calculate(n, final, need, have);

        printf("Case #%d:", i+1);
            for (int k = 0; k < n; k++)
            {
                printf(" %d", final[k]);
            }
            printf("\n");
    }
    


}