#include<stdio.h>

int main(){
    int testcase;
    scanf(" %d", &testcase);

    for (int i = 0; i < testcase; i++)
    {
        int n;
        scanf(" %d", &n);
        int need[n+5];
        int have[n+5];

        for (int j = 0; j < n; j++)
        {
            scanf(" %d", &need[j]);
        }
        for (int j = 0; j < n; j++)
        {
            scanf(" %d", &have[j]);
        }
        int counter=0;
        for (int j = 0; j < n; j++)
        {
            if(need[j]<have[j]){
                counter++;
            }
        }
        printf("Case #%d: %d\n", i+1, counter);
    }
    
}