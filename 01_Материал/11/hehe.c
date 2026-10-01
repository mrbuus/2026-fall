#include<stdio.h>
#include<stdlib.h>
#define N 11

void printBoard(int board[N][N])
{
    int i,j;
    for(i=0;i<N;i++)
    {
        if(i==0)
            printf("   ");
        else
            printf("%d ",i);
    }
    printf("\n");
    for(i=1;i<N;i++)
    {
        if(i==10)
            printf("%d ",i);
        else
            printf("%d  ",i);
        for(j=1;j<N;j++)
        {
            printf("%d ",board[i][j]);
        }
        printf("\n");
    }
}
int main()
{
    srand(time(NULL));
    int board[N][N],i,j,plane[N][N],wins=0;
    for(i=1;i<N;i++)
    {
        for(j=1;j<N;j++)
        {
            board[i][j]=0;
            plane[i][j]=0;
        }
    }
    plane[5][5]=5;
    plane[6][4]=3;
    plane[6][5]=3;
    plane[6][6]=3;
    plane[7][5]=3;
    plane[8][4]=3;
    plane[8][5]=3;
    plane[8][6]=3;
    printBoard(plane);
    printBoard(board);
    int x,y;
    while(1>0)
    {
        printf("Your turn\n");
        printf("X:");
        scanf("%d",&x);
        printf("Y:");
        scanf("%d",&y);
        if(x<N && y<N)
        {
            if(plane[x][y]==5)
            {
                wins=1;
                board[x][y]=5;
            }
            if(plane[x][y]==3)
            {
                board[x][y]=3;
            }
            printBoard(board);
            if(wins==1)
            {
                printf("You wins\n");
                for(i=1;i<N;i++)
                {
                    for(j=1;j<N;j++)
                    {
                        board[i][j]=0;
                    }
                }
                continue;
            }
        }
        else
            printf("Invalid input!!!");

        printf("Computers turn\n");
        x = rand() % 10+1;
        y = rand() % 10+1;
        if(plane[x][y]!=0)
                board[x][y]=plane[x][y];
            if(wins==1 && plane[x][y]==3)
                board[x][y]=7;
            if(plane[x][y]==5)
                wins=1;
            if(plane[x][y]==0)
                board[x][y]=8;
            printBoard(board);
            if(wins==1)
            {
                printf("Computer wins\n");
                for(i=1;i<N;i++)
                {
                    for(j=1;j<N;j++)
                    {
                        board[i][j]=0;
                    }
                }
            }
    }
    system("pause");
    return 0;
}
