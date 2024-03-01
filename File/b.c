#include<stdio.h>
#include<string.h>
#include<ctype.h>

char database[10] = {'O', 'I',' ' ,'E', 'A', 'S', 'G', 'T', 'B'};

int main() {
    FILE *file = fopen("testdata.in", "r");
    int tc;
    fscanf(file, " %d\n", &tc);

    for (int i = 0; i < tc; i++) {
        int push = 0;
        fscanf(file, "%d\n", &push);
        char string[1005];
        fscanf(file, " %[^\n]\n", string);
        printf("Case #%d: ", i + 1);

        for (int j = 0; j < strlen(string); j++) {
            if (isdigit(string[j])) {
                // printf("\n||%c - %d = %d||\n", string[j], 0, string[j] - '0');
                string[j] = database[string[j] - '0'];
            }
            if (string[j] == ' ') {
                printf(" ");
                continue;
            } else if (string[j] - push < 'A') {
                // printf("\n||%c - %d = %c||\n", string[j], push, 'Z' + (string[j] - push - 'A'+1));
                printf("%c", 'Z' + (string[j] - push - 'A' +1));
                continue;
            }
            printf("%c", string[j] - push);
        }
        printf("\n");
    }

    fclose(file);
    return 0;
}
