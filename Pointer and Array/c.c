#include<stdio.h>

int main(){
    int n;
    scanf(" %d", &n);
    int arr[n+5];

    for (int i = 0; i < n; i++)
    {
        scanf(" %d", &arr[i]);
    }
    int n2;
    scanf(" %d", &n2);
    for (int i = 0; i < n2; i++)
    {
        int swap[2];
        scanf(" %d %d", &swap[0], &swap[1]);
        swap[0]--;

        arr[swap[0]]=swap[1];
        printf("Case #%d:", i+1);
        for (int j = 0; j < n; j++)
        {
            printf(" %d", arr[j]);
        }
        printf("\n");
    }

    
    
    
}