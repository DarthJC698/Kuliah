#include <stdio.h>
#include <string.h>

int main(){

    int t;
    scanf("%d", &t);
    getchar();

    char vowels[] = "aiueoAIUEO";

    for (int i = 0; i < t; i++){
        char data[2003];
        scanf("%[^\n]", data);
        getchar();

        char res[2003];
        int len = strlen(data);
        int l = 0;
        for(int j = 0; j < len; j++){
            int is_contain = 0;

            for(int k = 0; k < 10; k++){
                if(data[j] == vowels[k]){
                    is_contain = 1;
                    break;
                }
            }

            if(is_contain){
                continue;
            }

            res[l] = data[j];
            l++;
        }

        res[l] = '\0';
        printf("Case #%d: %s\n", i + 1, res);
    }
    

    return 0;
}