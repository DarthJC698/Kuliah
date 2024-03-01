#include<stdio.h>
#include<string.h>

int main(){
    FILE *file = fopen("testdata.in", "r");
    int tc;
    fscanf(file," %d", &tc); fgetc(file);

    for (int i = 0; i < tc; i++)
    {
        // char change[27]={' '};
        char string[105];
        // printf("p\n");
        fscanf(file, " %[^\n]", string); fgetc(file);

        int q;
        fscanf(file, "%d", &q);
        int flag[105]={0};
        for (int k = 0; k < q; k++)
        {
            char change[2]; 
            fscanf(file, " %c %c", &change[0], &change[1]); fgetc(file);

            for (int j = 0; j < strlen(string); j++)
            {
                if(string[j]==change[0]&&!flag[j]){
                    // printf("P\n");
                    string[j]=change[1];
                    flag[j]=1;
                }
            }
        }
        
        int counter[26]={0};
            for (int j = 0; j < strlen(string); j++)
            {
                counter[string[j]-'A']++;
            }

            for (int j = 0; j < 25; j++)
            {
                if(counter[j]<1){
                    continue;
                }
                printf("%c %d\n", j + 'A', counter[j]);
            }
        
    }
    
}