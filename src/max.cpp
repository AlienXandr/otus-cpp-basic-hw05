#include "max.h"
#include <limits>

Max::Max() : max_{std::numeric_limits<double>::min()} {}

void Max::update(double next) {
  if (next > max_) {
    max_ = next;
  }
}

double Max::eval() const { return max_; }

const char *Max::name() const { return "Max"; }
