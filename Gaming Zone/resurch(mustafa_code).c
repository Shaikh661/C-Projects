#include <stdio.h>

char board[9] = {'1', '2', '3', '4', '5', '6', '7', '8', '9'};
char currentPlayer = 'X';

void drawBoard()
{
    printf("\n");
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
    // Rows
    if ((board[0] == board[1] && board[1] == board[2]) ||
        (board[3] == board[4] && board[4] == board[5]) ||
        (board[6] == board[7] && board[7] == board[8]))
        return 1;

    // Columns
    if ((board[0] == board[3] && board[3] == board[6]) ||
        (board[1] == board[4] && board[4] == board[7]) ||
        (board[2] == board[5] && board[5] == board[8]))
        return 1;

    // Diagonals
    if ((board[0] == board[4] && board[4] == board[8]) ||
        (board[2] == board[4] && board[4] == board[6]))
        return 1;

    return 0;
}

int checkDraw()
{
    for (int i = 0; i < 9; i++)
    {
        if (board[i] != 'X' && board[i] != 'O')
            return 0; // still moves left
    }
    return 1; // board full and no winner
}

void playerMove()
{
    int pos;
    printf("Player %c, enter your move (1-9): ", currentPlayer);
    scanf("%d", &pos);
    pos--; // adjust for index 0

    if (pos >= 0 && pos < 9 && board[pos] != 'X' && board[pos] != 'O')
    {
        board[pos] = currentPlayer;
    }
    else
    {
        printf("Invalid move! Try again.\n");
        playerMove(); // retry
    }
}

int main()
{
    printf("Welcome to Tic Tac Toe!\n");

    while (1)
    {
        drawBoard();
        playerMove();

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

    return 0;
}
