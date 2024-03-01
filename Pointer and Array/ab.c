#include<stdio.h>

void calculate(int arr1[51][51], int arr2[51][51], int n, int res[51][51]){
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            for (int k = 0; k < n; k++)
            {
                res[i][j]+=arr1[i][k]*arr2[k][j];
            }
            
        }
        
    }
    
}

int main(){
    int testcase;
    scanf(" %d", &testcase);

    for (int i = 0; i < testcase; i++)
    {
        int A[51][51]={0};
        int B[51][51]={0};
        int C[51][51]={0};
        int result[51][51]={0};
        int final[51][51]={0};
        int n;
        scanf(" %d", &n);
        for (int j = 0; j < n; j++)
        {
            for (int k = 0; k < n; k++)
            {
                scanf(" %d", &A[j][k]);
            }
            
        }
        for (int j = 0; j < n; j++)
        {
            for (int k = 0; k < n; k++)
            {
                scanf(" %d", &B[j][k]);
            }
            
        }

        calculate(A, B, n, result);

        for (int j = 0; j < n; j++)
        {
            for (int k = 0; k < n; k++)
            {
                scanf(" %d", &C[j][k]);
            }
            
        }
        
        calculate(result, C, n, final);

        printf("Case #%d:\n", i+1);
        for (int j = 0; j < n; j++)
        {
            for (int k = 0; k < n; k++)
            {
                if(k>0){
                    printf(" ");
                }
                printf("%d", final[j][k]);
            }
            printf("\n");
        }
    }
    


}