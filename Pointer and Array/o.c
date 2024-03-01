#include<stdio.h>

int main(){
    int n;
    int arr[101][101]={0};
    scanf(" %d", &n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
         scanf(" %d", &arr[i][j]);   
        }
    }

    int emer = 0;
    for (int i = 0; i < n; i++)
    {
        int status[101]={0};
        for (int j = 0; j < n; j++)
        {
            if(!status[arr[i][j]]){
                // printf("tes\n");
                status[arr[i][j]]=1;
                continue;
            }
            else if(status[arr[i][j]]){
                emer = 1;
                break;
            }
            
        }
        if(emer){
                break;
            }
    }
    if(emer){
        printf("Nay\n");
        return 0;
    }
    for (int i = 0; i < n; i++)
    {
        int status1[101]={0};
        for (int j = 0; j < n; j++)
        {
            if(!status1[arr[j][i]]){
                // printf("tes\n");
                status1[arr[j][i]]=1;
                continue;
        }
            else if(status1[arr[j][i]]){
                emer = 1;
                break;
            }
            
        }
        if(emer){
                break;
            }
    }

    if(emer){
        printf("Nay\n");
    }
    else{
        printf("Yay\n");
    }
    
}