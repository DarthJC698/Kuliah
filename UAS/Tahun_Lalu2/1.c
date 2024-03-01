#include<stdio.h>
#include<string.h>
#include<ctype.h>

typedef struct data_struct{
    int h;
    char m[3];
    char sentence[10000];
}ehe;

int main(){

    long long sum [3]={0};
    for (int i = 1; i <= 2; i++)
    {
        ehe data;
        data.sentence[0]='\0';
        scanf("%d:%[^>]>%[^\n]", &data.h, data.m, data.sentence); getchar();
        int word1=data.m[0]-'0';printf("%d\n", word1);
        int word2=data.m[1]-'0';printf("%d\n", word2);

        char sentence1[1000];
        char sentence2[1000];

        printf("%s\n",data.sentence);

        int test=0;
        int index=0;
        int status1=0;
        while(test<word1){
            if(index>strlen(data.sentence)){
                status1=1;
                break;
            }
            if(data.sentence[index]==' '){
                test++;
            }
            // printf("%d == %c||%d\n", index, data.sentence[index], test);
            index++;
            // printf("%d\n", index);
        }

        // index++;
        int need=0;
        while(data.sentence[index]!=' '&& data.sentence[index]!='\0'){
            sentence1[need++]=tolower(data.sentence[index++]);
        }
        sentence1[need++] = '\0';
        test=0;
        index=0;
        int status2=0;
        while(test<word2){
            if(index>strlen(data.sentence)){
                status2=1;
                break;
            }
            if(data.sentence[index]==' '){
                test++;
            }
            index++;
        }

        // index++;
        need=0;
        while(data.sentence[index]!=' ' && data.sentence[index]!='\0'){
            sentence2[need++]=tolower(data.sentence[index++]);
        }
        sentence2[need+1] = '\0';

        for (int j = 0; j < strlen(sentence1); j++)
        {
            if(status1){
                printf("skipped 1\n");
                break;
            }
            if(isalpha(sentence1[j])){
                sum[i]+=sentence1[j]-'a'+1;
            }
        }
        for (int j = 0; j < strlen(sentence2); j++)
        {
            if(status2){
                printf("skipped 2\n");
                break;
            }
            if(isalpha(sentence2[j])){
                sum[i]+=sentence2[j]-'a'+1;
            }

        }
        
        if(sum[i]>180){
            sum[i]-=180;
        }

        if(data.h>=12){
            if(strcmp(data.m,"00")==0){
                    
            }
            else{
                sum[i]=0-sum[i];}
        }
        printf("\n%s\n%s\n", sentence1, sentence2);
    }
    printf("Case #1: %lld,%lld\n", sum[1], sum[2]);
    
    
}