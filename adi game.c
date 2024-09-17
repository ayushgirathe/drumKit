#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  // Set the random seed
  srand(time(NULL));

  // Generate a random number between 1 and 100
  int secret_number = rand() % 100 + 1;

  int guess, tries = 0;

  printf("Welcome to the guessing game!\n");
  printf("I'm thinking of a number between 1 and 100. Try to guess it!\n");

  // Game loop
  do {
    printf("Enter your guess: ");
    scanf("%d", &guess);
    tries++;

    if (guess < secret_number) {
      printf("Too low! Try again.\n");
    } else if (guess > secret_number) {
      printf("Too high! Try again.\n");
    }
  } while (guess != secret_number);

  printf("Congratulations! You guessed the number in %d tries.\n", tries);

  return 0;
}
