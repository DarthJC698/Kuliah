#include <stdio.h>


int main(){
    int n;
    scanf(" %d", &n); getchar();
    int arr[n+5];

    for (int i = 0; i < n; i++)
    {
        scanf(" %d", &arr[i]);
    }

    int result[n+5];
    int count = 1;
    int j = 1;
    int status = 1;

    if(arr[0]>arr[1]){
        status = 1;
    }
    else{
        status = 0;
    }
    

    for (int i = 0; i < n; i++)
    {
        if (status)
        {
            if(arr[i]>arr[i+1]){
                count++;
            }
            else{
                result[j]=count;
                count = 1;
                status=0;
                j++;
                continue;
            }
        }
        else{
            if(arr[i]<arr[i+1]){
                count++;
            }
            else{
                result[j]=count;
                count = 1;
                status = 1;
                j++;
                continue;
            }
        }
        
    }
            

    for (int i = 1; i < j; i++)
    {
        if(i>1){
            printf(" ");
        }
        printf("%d", result[i]);
    }
    printf("\n");
    

    return 0;
}