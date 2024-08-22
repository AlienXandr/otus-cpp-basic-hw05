#include "std.h"
#include <cmath>

Std::Std(std::vector<double> &vector) : vector_{vector} {};

void Std::update(double next) {}

double Std::eval() const {
  double sum = 0.0, mean, standardDeviation = 0.0;

  int size = vector_.size();
  if (!size) {
    return 0;
  }

  for (int i = 0; i < size; ++i) {
    sum += vector_[i];
  }

  mean = sum / size;

  for (int i = 0; i < size; ++i) {
    standardDeviation += std::pow(vector_[i] - mean, 2);
  }

  return sqrt(standardDeviation / size);
}

const char *Std::name() const { return "Std"; }