#include "53.maximum-subarray.cpp"
#include <format>
#include <iostream>

template <typename T> void prettyPrint(std::vector<T> input) {
  for (auto x : input) {
    printf("%d ", x);
  }
  printf("\n");
}

int main() {

  std::vector<int> input = {-2, 1, -3, 4, -1, 2, 1, -5, 4};

  int answer = 6;
  Solution sol;
  int output = sol.maxSubArray(input);

  printf("using input: ");
  prettyPrint(input);
  printf("should give %d\n", answer);
  printf("but gives %d\n", output);
}
