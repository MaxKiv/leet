#include "1.two-sum.cpp"
#include <iostream>

using std::ostream;
// Overload << for vector
template <typename S>
ostream &operator<<(ostream &os, const vector<S> &vector) {

  // Printing all the elements using <<
  for (auto i : vector)
    os << i << " ";
  return os;
}
template <typename T> void prettyPrint(std::vector<T> input) {
  for (auto x : input) {
    printf("%d ", x);
  }
  printf("\n");
}

int main() {

  std::vector<int> input = {1, 3, 4, 2};
  int target = 9;
  std::vector<int> answer = {2, 3};
  Solution sol;
  auto output = sol.twoSum(input, target);

  std::cout << "using input: " << input << "\nshould give " << answer
            << "\nbut yields " << output;
}
