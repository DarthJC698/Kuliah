#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>

// global variable
int board[4][4] = {	{0,0,0,0},
					{0,0,0,0},
					{0,0,0,0},
					{0,0,0,0}
				  }, c[4];
				  
void drawBoard();
void updateBoard();
void move(int input);
void movevalue(int k);
void generateNum();

int main() {
	srand(time(0));	// randomizer and declaration
	int input; // storing "A W S D" key
	
	while(1){
		generateNum();
		drawBoard();
		input = getch();
		move(input);
	}

}

void drawBoard() {
	system("cls");
	printf("______________________________\n");
	printf("|  %d  |  %d  |  %d  |  %d  |\n", board[0][0], board[0][1], board[0][2], board[0][3]);
	printf("______________________________\n");
	printf("|  %d  |  %d  |  %d  |  %d  |\n", board[1][0], board[1][1], board[1][2], board[1][3]);
	printf("______________________________\n");
	printf("|  %d  |  %d  |  %d  |  %d  |\n", board[2][0], board[2][1], board[2][2], board[2][3]);
	printf("______________________________\n");
	printf("|  %d  |  %d  |  %d  |  %d  |\n", board[3][0], board[3][1], board[3][2], board[3][3]);
	printf("______________________________\n");
}

void generateNum() {
	int random_row, random_column, baseNum;
	while(1) {
		random_row = rand() % 4;
		random_column =rand() % 4;
		if(board[random_row][random_column] == 0) {
			board[random_row][random_column] = 2;
			break;
		}
	}
}

void updateBoard()
{
    int i,j;
    for(i=3;i>0;i--)
    {
        if(c[i]==c[i-1] )
        {
            c[i]+=c[i-1];
            c[i-1]=0;
        }
        else if(c[i-1]==0 && c[i]!=0 )
        {
            c[i-1]=c[i];
            c[i]=0;
        }
    }
    movevalue(0);
}
void move(int choise){
        if(choise=='D' || choise =='d')
        {
            for(int i=0;i<4;i++)
            {
                for(int j=0;j<4;j++)
                {
                    c[j]=board[i][j];
                }
                updateBoard();
                for(int k=0;k<4;k++)
                {
                    board[i][k]=c[k];
                }
            }
        }
        else if(choise=='a' || choise=='A')
        {
            for(int i=0;i<4;i++)
            {
                for(int j=3;j>=0;j--)
                {
                    c[3-j]=board[i][j];
                }
                updateBoard();
                for(int k=0;k<4;k++)
                {
                    board[i][3-k]=c[k];
                }
            }
        }
        else if(choise=='s' || choise =='S')
        {
            for(int i=0;i<4;i++)
            {
                for(int j=0;j<4;j++)
                {
                    c[j]=board[j][i];
                }
                updateBoard();
                for(int k=0;k<4;k++)
                {
                    board[k][i]=c[k];
                }
            }
        }
        else if(choise=='w' || choise=='W')
        {
            for(int i=0;i<4;i++)
            {
                for(int j=3;j>=0;j--)
                {
                    c[3-j]=board[j][i];
                }
                updateBoard();
                for(int k=0;k<4;k++)
                {
                  board[3-k][i]=c[k];
                }
            }
        }
}
void movevalue(int k)
{
    int i;
    if(k==3 )
    {
        return;
    }
    for(i=k;i<4;i++)
    {
        if(c[i]!=0)
        {
            movevalue(i+1);
            for(;i<4;i++)
            {
                if(c[i+1]!=0)
                {
                    break;
                }
                    c[i+1]=c[i];
                    c[i]=0;
            }
        }
    }
}




