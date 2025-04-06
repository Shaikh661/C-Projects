#include <stdio.h>

// Function Prototype() {
// It's always a good idea to wright a function prototype.
int sum(int, int);
void print();
// }

// Function defined() {
int sum(int x, int y) {
  return x + y;
}

void print() {
  printf("\tUsman here\n");
}

// }
// int main
int main() {
  printf("\t%d\n", sum(9, 1));
  print();
  return 0;
}
