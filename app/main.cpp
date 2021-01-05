#include <iostream>
#include <stdlib.h>
#include <text_comparator/text-comparator-pub-header.h>

int main(int, char **) {
  std::cout << "1 + 2 = " << text_comparator::calculateDifference(1, 2) << '\n';
  return 0;
}
