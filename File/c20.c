#include <stdio.h>
#include <string.h>

int main(){

    FILE* file = fopen("testdata.in", "r");

    int t;
    fscanf(file, "%d\n", &t);

    for(int i = 0; i < t; i++){
        char data[201];
        fscanf(file, " %[^\n]\n", data);
        // printf("%s\n", data);
        // printf("ce %s\n", data);
        
        int n = 0;
        fscanf(file, "%d\n", &n);

        int len = strlen(data);

        int flag[30] = {0};
        for(int j = 0; j < n; j++){
            // char tmp[4];
            char a, b;
            fscanf(file, "%c %c\n", &a, &b);
            // printf("f %c t %c %d\n", a, b, flag[a - 'A']);

            if(flag[a - 'A'] == 0){
                // printf("ce %c\n", a);
                for(int k = 0; k < len; k++){
                    if(data[k] == a){
                        data[k] = b;
                    }
                }
            }
            flag[a - 'A'] = 1;
        }

        // printf("ha %s\n", data);

        int count[30] = {0};
        for(int j = 0; j < len; j++){
            count[data[j] - 'A']++;
            // for(int k = 0; k < n; k++){
            //     if(data[j] == from[k]){
            //         break;
            //     }
            // }
        }

        for(int j = 0; j < 26; j++){
            if(count[j]){
                printf("%c %d\n", 'A' + j, count[j]);
            }
        }
    }

    return 0;
}