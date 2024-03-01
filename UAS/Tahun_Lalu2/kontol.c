#include<stdio.h>
#include<string.h>
#include<ctype.h>

typedef struct data_struct{
    int h;
    char m[3];
    char sentence[10000];
}ehe;

int main(){
        ehe data;
        char string[10000];
        scanf("%[^\n]",string); getchar();
        // scanf("%d:%s>%s", &data.h, data.m, string); getchar();
        printf("%s\n", string);


}