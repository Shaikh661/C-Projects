#include <stdio.h>
#include <conio.h>

char board[9] = {'1', '2', '3', '4', '5', '6', '7', '8', '9'};
char currentPlayer = 'X';

void drawBoard()
{
    // clrscr();
    printf("\n\n");
    printf(" %c | %c | %c\n", board[0], board[1], board[2]);
    printf("---|---|---\n");
    printf(" %c | %c | %c\n", board[3], board[4], board[5]);
    printf("---|---|---\n");
    printf(" %c | %c | %c\n", board[6], board[7], board[8]);
    printf("\n");
}

void switchPlayer()
{
    if (currentPlayer == 'X')
        currentPlayer = 'O';
    else
        currentPlayer = 'X';
}

int checkWin()
{
    int i;
    for (i = 0; i < 9; i += 3)
    {
        if (board[i] == board[i + 1] && board[i + 1] == board[i + 2])
            return 1;
    }
    for (i = 0; i < 3; ++i)
    {
        if (board[i] == board[i + 3] && board[i + 3] == board[i + 6])
            return 1;
    }
    if ((board[0] == board[4] && board[4] == board[8]) || (board[2] == board[4] && board[4] == board[6]))
        return 1;
    return 0;
}

int checkDraw()
{
    int i;
    for (i = 0; i < 9; ++i)
    {
        if (board[i] != 'X' && board[i] != 'O')
            return 0;
    }
    return 0;
}

void playerInput()
{
    int pos;
    printf("Player %c, enter your move (1-9): ", currentPlayer);
    scanf("%d", &pos);
    pos--;
    if (pos >= 0 && pos < 9 && board[pos] != 'X' && board[pos] != 'O')
    {
        board[pos] = currentPlayer;
    }
    else
    {
        printf("Invalid move! Try again.\n");
        playerInput();
    }
}

void playGame()
{
    while (1)
    {
        drawBoard();
        playerInput();
        if (checkWin())
        {
            drawBoard();
            printf("Player %c wins!\n", currentPlayer);
            break;
        }
        if (checkDraw())
        {
            drawBoard();
            printf("It's a draw!\n");
            break;
        }
        switchPlayer();
    }
}

int main(void)
{
    // clrscr();
    printf("Welcome to Tic Tac Toe \n");
    playGame();
    getch();
}
