#include<stdio.h>
#include<string.h>

int main(){
    int testcase;
    scanf(" %d", &testcase);

    for (int i = 0; i < testcase; i++)
    {
        char string[1005];
        scanf(" %[^\n]", string);

        int n;
        scanf( "%d", &n);
        for (int j = 0; j < n; j++)
        {
            char swap[2];
            scanf(" %c %c", &swap[0], &swap[1]); getchar();
            for (int i = 0; i < strlen(string); i++)
            {
                if(string[i]==swap[0]){
                    string[i]=swap[1];
                }
            }
            
        }
        printf("Case #%d: %s\n", i+1, string);
    }
    
}