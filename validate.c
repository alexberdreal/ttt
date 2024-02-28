#include <stdlib.h>
#include "validate.h"

bool validate(int matrix[3][3], size_t i, size_t j) {
  return matrix[i][j] == 0;
}
