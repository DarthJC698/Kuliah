#include <stdio.h>
#include <string.h>




void zero(int counter[]) {
    for (int i = 0; i <= 26; i++) {
        counter[i] = 0;
    }
}

void zerostr(char res[]) {
    for (int i = 0; i <= 101; i++) {
        res[i] = '?';
    }
}

void reset(char config[]) {
    for (int i = 0; i <= 26; i++) {
        config[i] = '\0';
    }
}


void game(FILE *filePointer, int n) {
    char res[105];
    
    zerostr(res);
    int flag[100]={0};
    char sentence[105];
    fscanf(filePointer, " %[^\n]\n", sentence);
    int sum;
    fscanf(filePointer, " %d", &sum);
    char config[30];
    for (int i = 0; i < sum; i++) {
        char ehe;
        char blank;
        fscanf(filePointer, " %c", &ehe);
        if(!flag[(int)(ehe) - 'A']){
            fscanf(filePointer, " %c", &config[(int)(ehe) - 'A']);
            flag[(int)(ehe) - 'A']=1;
            continue;
        }
        fscanf(filePointer, " %c", &blank);
        
    } 
    // printf("\n||%s||\n", sentence);
    for (int j = 0; j < strlen(sentence); j++) {
        if(sentence[j]-'A'>=0){
        if ((int)(config[(int)(sentence[j]) - 'A']) >= 'A') {
        res[j] = config[(int)(sentence[j] - 'A')];
        continue;}
}
        res[j] = sentence[j];
    }
    // printf("\n||%s||\n", res);
    int counter[30];
    zero(counter);
    for (int j = 0; sentence[j]!='?'; j++) {
        if(res[j]-'A'>=0){
        counter[(int)(res[j]) - 'A']++;
        }
        
    }
    for (int i = 0; i < 26; i++) {
        if (counter[i] > 0) {
            printf("%c %d\n", (char)(i + 'A'), counter[i]);
        }
    }
    
    reset(config);
}

int main() {
    FILE *filePointer;
    filePointer = fopen("testdata.in", "r");
    if (filePointer == NULL) {
        printf("Error opening the file.\n");
        return 1; // Exiting with an error code
    }

    int n;
    fscanf(filePointer, " %d", &n);
    for (int i = 0; i < n; i++) {
        game(filePointer, i);
    }

    fclose(filePointer);

    return 0;
}