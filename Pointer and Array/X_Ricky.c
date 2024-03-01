#include<stdio.h>


int main(){
    int testcase;
    scanf(" %d", &testcase); getchar();
    for (int i = 0; i < testcase; i++)
    {
        int n, m;
        long long total=0, current;
        scanf(" %d %d", &n, &m);
        for (int j = 0; j < n; j++)
        {
            current= 0;
            for (int k = 0; k < m; k++)
            {
                long long temp;
                scanf(" %lld", &temp);
                if(current-temp<0){
                    current = temp;
                }
                
            }
            total+=current;
        }
        printf("Case #%d: %lld\n", i+1, total);
    }
    
}