#include<stdio.h>


int main(){
    int n;
    scanf(" %d", &n);
    int arr[1000]={0};


    int number;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf(" %d", &number);
            arr[number]++;
        }
        
    }

    int counter=0;
    for (int i = 1; i <= n; i++)
    {
        // printf("%d==%d\n", arr[i], n);
        if(arr[i]==0&&n>1){
            continue;
        }
        else if(arr[i]>=n){
            continue;
        }
        else{
            counter++;
        }
    }
    
    printf("%d\n", counter);
}