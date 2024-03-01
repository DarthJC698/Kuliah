#include <stdio.h>

int simulation(int testcase){
    int n;
    scanf(" %d", &n);
    long long int arr[n+5];

    for (int i = 0; i < n; i++)
    {
        scanf(" %d", &arr[i]);
    }
    int sumleft=0, sumright=0;
    int indexleft=0, indexright=n-1;

    // printf("sum right %d, sumleft %d\n", sumright, sumleft);
    // printf("index right %d, indexleft %d\n", indexright, indexleft);

    while(indexleft!=indexright){
        
        while(sumleft>=sumright&&indexleft!=indexright){
        sumright+=arr[indexright];
        indexright--;
        // printf("sum right %d, sumleft %d\n", sumright, sumleft);
        // printf("index right %d, indexleft %d\n", indexright, indexleft);
        }
        while(sumleft<sumright&&indexleft!=indexright){
        sumleft+=arr[indexleft];
        indexleft++;
        // printf("sum right %d, sumleft %d\n", sumright, sumleft);
        // printf("index right %d, indexleft %d\n", indexright, indexleft);
        }

    }
    if(sumleft<sumright){
        sumleft+=arr[indexleft];
    }
    else{
        sumright+=arr[indexleft];
    }
    
    // printf("sum right %d, sumleft %d\n", sumright, sumleft);
    // printf("index right %d, indexleft %d\n", indexright, indexleft);



    if(sumleft==sumright){
            printf("Case #%d: Yes\n", testcase);
            return;
        }
    printf("Case #%d: No\n", testcase);


    // for (int i = 0; i < n; i++)
    // {
        // int sumleft=0, sumright=0;

    //     for (int j = 0; j < i; j++)
    //     {
    //         sumleft+=arr[j];
    //     }
    //     for (int j = i; j < n; j++)
    //     {
    //         sumright+=arr[j];
    //     }

    //     if(sumleft==sumright){
    //         printf("Case #%d: Yes\n", testcase);
    //         return;
    //     }
    // }
    // printf("Case #%d: No\n", testcase);
    
    
}

int main(){
    int testcase;
    scanf(" %d", &testcase); getchar();

    for (int i = 0; i < testcase; i++)
    {
        simulation(i+1);
    }
    


    return 0;
}