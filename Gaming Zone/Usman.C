#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Function Prototype() {
// It's always a good idea to wright a function prototype.
void code_is_running();
// }

// Function defined() {
void code_is_running() {
  printf("\n\tCode is Running !!!\n\n");
}
// }

// int main() {
int main() {
  int number_guess_by_user;
  int number_of_guesses = 0;
  int random_number;

  srand(time(0));
  random_number = (rand() % 101);

  do {
    printf("guess the number: ");
    scanf("%d", &number_guess_by_user);
    number_of_guesses = number_of_guesses + 1;

    if (number_guess_by_user > random_number) {
      printf("----smoler\n");
    } else if (number_guess_by_user < random_number) {
      printf("----larger\n");
    }

  } while (number_guess_by_user != random_number);

  printf("---- you guessed the number ----\n");
  printf("-------------- %d --------------\n", number_of_guesses);

  code_is_running();
  return 0;
}
// }