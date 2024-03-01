#include<stdio.h>


int main(){
    int testcase;
    scanf(" %d", &testcase);

    for (int i = 1; i <= testcase; i++)
    {
        int n;
        scanf(" %d", &n);

        int arr[n+1];
        for (int j = 0; j < n; j++)
        {
            scanf(" %d", &arr[j]);
        }
        printf("Case #%d:", i);
        for (int j = n-1; j >=0; j--)
        {
            printf(" %d", arr[j]);
        }
        printf("\n");

    }
    


}