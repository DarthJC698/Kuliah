#include<stdio.h>
#include<string.h>

void swapCharacter(char *a, char *b){
    char temp = *a;
    *a = *b;
    *b = temp;
}

int main(){
    int testcase;
    scanf(" %d", &testcase);

    for (int i = 0; i < testcase; i++)
    {
        int n;
        char string[1005];
        scanf(" %d %[^\n]", &n, string); getchar();
        
        int status[1005]={0};
        for (int j = 0; j < n; j++)
        {      
            int switchChar[2];
            scanf(" %d %d", &switchChar[0], &switchChar[1]);
            switchChar[0]--;
            switchChar[1]--;
            while(switchChar[0]!=switchChar[1]){
                if(switchChar[1]-switchChar[0]==1){
                    swapCharacter(&string[switchChar[0]], &string[switchChar[1]]);
                    break;
                }
                swapCharacter(&string[switchChar[0]], &string[switchChar[1]]);
                switchChar[0]++;
                switchChar[1]--;
            }
        }
        printf("Case #%d: %s\n", i+1, string);
        
    }
    
}