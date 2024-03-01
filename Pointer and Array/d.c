#include<stdio.h>

int main(){
    int p, l;
    scanf(" %d %d", &p, &l);

    int arr[p+2][l+2];

    for (int i = 0; i < p; i++)
    {
        for (int j = 0; j < l; j++)
        {
            scanf(" %d", &arr[i][j]);
        }
        
    }
    
    int n;
    scanf(" %d", &n);

    for (int i = 0; i < n; i++)
    {
        int location[4];
        scanf(" %d %d %d", &location[0], &location[1], &location[2]);
        location[0]--;
        location[1]--;
        arr[location[0]][location[1]]=location[2];
    }
    for (int i = 0; i < p; i++)
    {
        for (int j = 0; j < l; j++)
        {
            if(j>0){
                printf(" ");
            }
            printf("%d", arr[i][j]);
        }
        printf("\n");
    }
}