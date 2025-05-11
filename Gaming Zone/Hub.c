#include <stdio.h>
#include <stdlib.h>

int main()
{
    int choice;

    printf("-------->>  Welcome to Gaming Zone <<--------\n");
    printf("--->>  plz let us have your information <<---\n");
    system(" g++ Info.c -o Info && Info.exe");

    printf("\n-->>Now Please choose a game to play:\n");
    printf("1. Game made by Qasim\n");
    printf("2. Game Made by Thunder Star\n");
    printf("3. Game made by Usman\n");
    printf("Enter your choice (1-3): ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        system(" g++ Qasim.C -o Qasim && Qasim.exe");
        break;
    case 2:
        system("g++ thunder_star.C -o thunder_star && thunder_star.exe");
        break;
    case 3:
        system("g++ Usman.C -o Usman && Usman.exe");
        break;
    default:
        printf("Invalid choice! Please try again.\n");
    }

    printf("\n\n\tHope you injoied !!!\n ");
    printf("\tI know its from e but its funny, isn't it.\n ");

    return 0;
}
// mini_game_world/
// │
// ├── main_menu.cpp           <-- Main menu
// ├── snake_game.cpp          <-- Snake Game
// ├── tic_tac_toe.cpp         <-- Tic Tac Toe
// ├── flappy_bird.cpp         <-- Flappy Bird
// ├── puzzle_game.cpp         <-- Puzzle Game
// ├── racing_game.cpp         <-- Racing Game
// ├── snake_game.hpp          <-- Headers
// ├── tic_tac_toe.hpp
// └── ... etc
