#include "text-comparator-priv-header.h"

namespace text_comparator {
  auto calculateDifference(const int first, const int second) -> int {
    return sum_aux(first, second);
  }
} // namespace text_comparator
