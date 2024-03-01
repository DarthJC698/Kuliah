#include<stdio.h>
#include<string.h>

int main(){
    int testcase;
    scanf(" %d", &testcase);

    for (int i = 0; i < testcase; i++)
    {
        char string[1005]={};
        scanf(" %[^\n]", string); getchar();

        printf("Case %d: ", i+1);
        for (int j = 0; j < strlen(string); j++)
        {
            if(j>0){
                printf("-");
            }
            printf("%d", string[j]);
        }
        printf("\n");
    }
    
}