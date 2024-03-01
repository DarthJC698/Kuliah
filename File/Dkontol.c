#include <stdio.h>
#include <string.h>

int main() {
    FILE *file = fopen("testdata.in", "r");
    if (file == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    int tc;
    fscanf(file, " %d\n", &tc);

    for (int i = 0; i < tc; i++) {
        char string[1005];
        fscanf(file, " %[^\n]", string);
        // printf("%s\n", string);

        int q = 0;
        fscanf(file, "%d", &q);
        int flag[105] = {0};

        for (int k = 0; k < q; k++) {
            char change[2];
            fscanf(file, " %c %c", &change[0], &change[1]);
            fgetc(file);

            if (flag[change[0] - 'A'])
                continue;

            for (int j = 0; j < strlen(string); j++) {
                if (string[j] == change[0]) {
                    string[j] = change[1];
                    flag[change[0] - 'A'] = 1;
                }
            }
        }

        int counter[26] = {0};
        for (int j = 0; j < strlen(string); j++) {
            counter[string[j] - 'A']++;
        }

        for (int j = 0; j < 26; j++) {
            if (counter[j] > 0) {
                printf("%c %d\n", j + 'A', counter[j]);
            }
        }
    }

    fclose(file);
    return 0;
}
