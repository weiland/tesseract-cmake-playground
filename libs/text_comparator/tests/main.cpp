#include <iostream>
#include <text_comparator/text-comparator-pub-header.h>

int main(int, char **) {
  std::cout << "Running tests...\n";
  return 42 == text_comparator::calculateDifference(40, 2) ? 0 : 1;
}
