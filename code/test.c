#include "209.minimum-size-subarray-sum.c"
#include <assert.h>
#include <stdio.h>

void printArray(int *nums, int numsSize) {
  for (int i = 0; i < numsSize; ++i) {
    printf("%d ", nums[i]);
  }
  printf("\n");
}

int main() {
  int input[] = {1, 2, 3, 4, 5};
  int target = 11;
  int answer = 3;
  int output = minSubArrayLen(target, input, sizeof(input) / sizeof(input[0]));

  printf("Testing: ");
  printArray(input, sizeof(input) / sizeof(input[0]));
  printf("Should yield %d\n", answer);
  printf("result: %d\n", output);
  fflush(stdout);

  assert(answer == output);
}
