#include<stdio.h>
#define MAX 1000

int flag[MAX][MAX]={0};
char map[MAX][MAX];

void simulation(int x, int y, int width, int length){
    printf("---------------------------------------------\n");
    for (int i = 0; i < length; i++)
    {
        printf("%s\n", map[i]); 
    }


    // # UNTUK TEMBOK, X UNTUK NANDAIN UDA DILEWATINN
    // printf("p\n");
    if( x>width-1 || y>length-1 || x<0 || y<0 || flag[x][y] || map[x][y]=='#'||map[x][y]=='X'){
        return;
    }
    flag[x][y]=1;
    map[x][y]='X';
    simulation(x+1, y, width, length);
    simulation(x-1, y, width, length);
    simulation(x, y+1, width, length);
    simulation(x, y-1, width, length);
}

int main(){
    int length, width;
    int count = 0;
    scanf(" %d %d", &length, &width); getchar();

    for (int i = 0; i < length; i++)
    {
        scanf(" %s", map[i]); getchar();
    }

    for (int i = 0; i < length; i++)
    {
        for (int j = 0; j < width; j++)
        {
            if(map[i][j]=='P' && !flag[i][j]){
                simulation(i, j, length, width);
                // count++;
            }
        }
    }
    printf("---------------------------------------------\n");
    // printf("%d\n", count);
}