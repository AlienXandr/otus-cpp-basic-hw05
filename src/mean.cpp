#include "mean.h"

Mean::Mean() : sum_{0}, count_{0} {}

void Mean::update(double next) {
  count_ += 1;
  sum_ += next;
}

double Mean::eval() const { return sum_ / count_; }

const char *Mean::name() const { return "Mean"; }
