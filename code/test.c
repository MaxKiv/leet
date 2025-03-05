#include "977.squares-of-a-sorted-array.c"
#include <assert.h>
#include <stdio.h>

void printArray(int *nums, int numsSize) {
  for (int i = 0; i < numsSize; ++i) {
    printf("%d ", nums[i]);
  }
  printf("\n");
}

int main() {
  int input[] = {-4, -1, 0, 3, 10};
  int returnsize = 0;
  int *output = sortedSquares(input, sizeof(input) / sizeof(int), &returnsize);
  int answer[] = {0, 1, 9, 16, 100};

  printf("Testing: ");
  printArray(input, sizeof(input) / sizeof(input[0]));
  // printf("Should yield %d\n", answer);
  printf("Should yield ");
  printArray(answer, sizeof(answer) / sizeof(answer[0]));
  printf("\n");
  printf("result :");
  printArray(output, returnsize);
  // printf("result: %d\n", output);
  fflush(stdout);

  assert(answer == output);
}
