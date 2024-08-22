#include "min.h"
#include <limits>

Min::Min() : min_{std::numeric_limits<double>::max()} {}

void Min::update(double next) {
  if (next < min_) {
    min_ = next;
  }
}

double Min::eval() const { return min_; }

const char *Min::name() const { return "Min"; }
