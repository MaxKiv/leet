#include "53.maximum-subarray.c"
#include <assert.h>
#include <stdio.h>

int maxSubArray(int *nums, int numsSize);

void printArray(int *nums, int numsSize) {
  for (int i = 0; i < numsSize; ++i) {
    printf("%d ", nums[i]);
  }
  printf("\n");
}

int main() {
  int input[] = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
  int answer = 6;
  int output = maxSubArray(input, sizeof(input) / sizeof(input[0]));

  printf("Testing: ");
  printArray(input, sizeof(input) / sizeof(input[0]));
  printf("Should yield %d\n", answer);
  printf("result: %d\n", output);
  fflush(stdout);

  assert(answer == output);
}
