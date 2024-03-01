#include<stdio.h>
#include<string.h>
#include<ctype.h>

int count = 0;

void floodfill(char map[101][101], int x, int y, int n){
    if(map[x][y]=='O'||map[x][y]=='#'||x<0||y<0||x>n||y>n){
        return;
    }
    count++;
    map[x][y]='O';
    floodfill(map, x+1, y, n);
    floodfill(map, x-1, y, n);
    floodfill(map, x, y+1, n);
    floodfill(map, x, y-1, n);

    for (int i = 0; i < n; i++)
    {
        printf("%s\n", map[i]);
    }
    
}

int main(){
    char map[101][101];
    int n, q;
    scanf(" %d %d", &n, &q);
    
    printf("p\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%s", map[i]); getchar();
    }

    int sum[26]={-1};
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(isalpha(map[i][j])){
                int ehe1=map[i][j]-'a';
                floodfill(map, i, j, n);
                sum[ehe1]=count;
                count = 0;
            }
        }
        
    }

    int index = -1;
    while(q>0){
        if(sum[index++]>0){
            q--;
            printf("%c %d\n", index+'a', sum[index]);
        }
    }
    
}