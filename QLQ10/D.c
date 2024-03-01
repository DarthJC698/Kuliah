#include<stdio.h>
#include<string.h>

void resetstr(char ehe[]){
    for (int i = 0; i < 2005; i++)
    {
        ehe[i]='\0';
    }
}

int main(){
    int n;
    scanf("%d", &n);getchar();
    for (int i = 0; i < n; i++)
    {
        char exclude[]="AUIOEaieou";
        char sentence[2005];
        char res[2005];
        // resetstr(res);
        scanf("%[^\n]", sentence); getchar();
        
        int z = 0;
        int len=strlen(sentence);
        for (int j = 0; j < len; j++)
        {
            int status=0;
            for (int k = 0; k < 10; k++)
            {
                if(sentence[j]==exclude[k]){
                    status=1;
                    break;
                }
            }
            if(status){
                continue;
            }

            res[z]=sentence[j];
            z++;
                    }
        res[z]='\0';
        printf("Case #%d: %s\n", i+1, res);
    }
    

}