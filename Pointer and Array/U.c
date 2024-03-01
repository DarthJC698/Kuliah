#include<stdio.h>


int main(){
    int testcase;
    scanf(" %d", &testcase);

    for (int i = 0; i < testcase; i++)
    {
        int n;
        scanf(" %d", &n);
        int arr[n+5];

        for (int j = 0; j < n; j++)
        {
            scanf(" %d", &arr[j]);
        }
        
        int bibi,lili;
        scanf(" %d %d", &bibi, &lili);
        bibi--;
        lili--;
        printf("Case #%d : ", i+1);
        if(arr[bibi]>arr[lili]){
            printf("Bibi\n");
        }
        else if(arr[bibi]<arr[lili]){
            printf("Lili\n");
        }
        else{
            printf("Draw\n");
        }
    }
    
}