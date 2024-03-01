#include<stdio.h>
#include<string.h>

int main(){
    int n;
    scanf(" %d", &n);

    int index[n+5];
    int arr[n+5];

    for (int i = 0; i < n; i++)
    {
        scanf(" %d", &index[i]);
    }
    for (int i = 0; i < n; i++)
    {
        scanf(" %d", &arr[index[i]]);
    }
    for (int i = 0; i < n; i++)
    {
        if(i>0){
            printf(" ");
        }
        printf("%d", arr[i]);
    }
    printf("\n");
}