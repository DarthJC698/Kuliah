#include<stdio.h>
#include<string.h>

int main(){
    int testcase;
    scanf(" %d", &testcase);

    for (int i = 0; i < testcase; i++)
    {
        int n, k;
        scanf(" %d %d", &n, &k);
        int counter=k;

        char string[n+5];

        scanf(" %[^\n]", string); getchar();

        int secondfloor=0;
        int status = 0;
        
        int first, last;
        int ehe=1;
        int random=0;

        for (int i = 0; i < n; i++)
        {
            if(string[i]=='1'&&ehe){
                random++;
                first = i;
                ehe=0;
                continue;
            }
            else if(string[i]=='1'){
                random++;
                last = i;
            }
        }
        if(random==1){
            if(n>=k){
                printf("Case #%d: Dead\n", i+1);
                continue;
            }
            else{
                printf("Case #%d: Alive\n", i+1);
                continue;
            }
        }
        if(k-first>0&&k-(n-last)+1>0){
            printf("Case #%d: Alive\n", i+1);
        }
        else{
            printf("Case #%d: Dead\n", i+1);
        }
    }
    
}