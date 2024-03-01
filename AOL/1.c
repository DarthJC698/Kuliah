#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main(){
    printf("Please enter the word you want to invert: \n");
    char sentence[10000];
    
    printf(">> "); scanf(" %[^\n]", sentence); getchar();

    printf("Processed sentence: ");
    for (int i = strlen(sentence); i >= 0; i--)
    {
        if(isupper(sentence[i])){
            printf("%c", tolower(sentence[i]));
        }
        else if(islower(sentence[i])){
            printf("%c", toupper(sentence[i]));
        }
        else{
            printf("%c", sentence[i]);
        }
    }
    printf("\n");
    
}