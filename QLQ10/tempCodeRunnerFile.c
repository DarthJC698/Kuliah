#include<stdio.h>
#include<string.h>

char exclude[15]="AUIOEaieou";

void resetstr(char ehe[]){
    for (int i = 0; i < 1005; i++)
    {
        ehe[i]='\0';
    }
}

int main(){
    int n;
    scanf(" %d", &n);
    for (int i = 0; i < n; i++)
    {
        char sentence[1005];
        char res[1005];
        resetstr(res);
        scanf(" %[^\n]", sentence);
        int status=0;
        int z = 0;
        for (int j = 0; j < strlen(sentence); j++)
        {
            for (int k = 0; k < 11; k++)
            {
                if(sentence[j]==exclude[k]){
                    status=1;
                    break;
                }
            }
            if(status){
                status=0;
                continue;
            }

            res[z++]=sentence[j];
        }
        printf("Case #%d: %s\n", i+1, res);
    }
    

}