#include<stdio.h>
#include<string.h>

void swapChar(char *a, char *b){
    char temp = *a;
    *a= *b;
    *b = temp;
}

int main(){

    int p, l;
    scanf(" %d %d", &p, &l);
    char string[p+5][l+5];
    for (int i = 0; i < l; i++)
    {
        scanf("%s", string[i]); getchar();
    }

    for (int k = 0; k < l; k++)
    {
        for (int i = 0; i < p; i++)
        {
            for (int j = 0; j < p - i - 1; j++)
                {
                    if(string[k][j+1] < string[k][j]){
                        swapChar(&string[k][j], &string[k][j+1]);
                    }
                }
        
        }
    }

    for (int k = 0; k < l; k++)
    {
        for (int i = 0; i < p; i++)
        {
            for (int j = 0; j < p - i - 1; j++)
                {
                    if(strcmp(string[j+1], string[j])>0){
                        char temp[1000];
                        strcpy(temp, string[j+1]);
                        strcpy(string[j+1], string[j]);
                        strcpy(string[j], temp);
                    }
                }
        
        }
    }
    for (int i = 0; i < l; i++)
    {
        printf("%s\n", string[i]);
    }
    
}