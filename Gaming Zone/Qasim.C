#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Function to get choice as a string
const char* getChoice(int choice) {
    if (choice == 0) return "Rock";
    else if (choice == 1) return "Paper";
    else return "Scissors";
}

// Function to decide the winner of a round
void checkWinner(int user, int computer) {
    printf("You chose: %s\n", getChoice(user));
    printf("Computer chose: %s\n", getChoice(computer));

    if (user == computer) {
        printf("Result: It's a draw!\n");
    }
    else if ((user == 0 && computer == 2) ||
             (user == 1 && computer == 0) ||
             (user == 2 && computer == 1)) {
        printf("Result: You win this round!\n");
    }
    else {
        printf("Result: Computer wins this round!\n");
    }

    printf("---------------------------\n");
}

int main() {
    int userChoice, computerChoice;
    int rounds = 7;

    srand(time(NULL)); // seed random

    printf("=== Rock Paper Scissors ===\n");
    printf("0 - Rock | 1 - Paper | 2 - Scissors\n");
    printf("You will play 7 rounds.\n");
    printf("---------------------------\n");

    for (int i = 1; i <= rounds; i++) {
        printf("Round %d: Enter your choice (0-2): ", i);
        scanf("%d", &userChoice);

        if (userChoice < 0 || userChoice > 2) {
            printf("Invalid choice. Skipping round.\n");
            printf("---------------------------\n");
            continue;
        }

        computerChoice = rand() % 3;
        checkWinner(userChoice, computerChoice);
    }

    printf("Game Over. Thanks for playing!\n");

    return 0;
}
