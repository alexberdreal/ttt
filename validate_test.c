#include <stdio.h>
#include <stdlib.h>
#include "validate.h"

int main(int argc, char** argv) {
  int i = atoi(argv[1]);
  int j = atoi(argv[2]);
  int matrix[3][3] = {{0, 0, 1}, {0, 0, 0}, {0, 0, 0}}; 
  if (!validate(matrix, (size_t)i, (size_t)j)) {
    printf("Slot %d %d is already used", i, j);
  } else {
    printf("You can use this slot");
  }
  return 0;
}
