#include "percentile.h"
#include <algorithm>
#include <cmath>
#include <string>

Percentile::Percentile(double level, std::vector<double> &vector)
    : level_{level}, vector_{vector} {
  std::string str1 = "Percentile_";
  std::string str2 = std::to_string(static_cast<int>(level_));
  name_ = str1 + str2;
};

void Percentile::update(double next) {}

double Percentile::eval() const {
  if (vector_.empty()) {
    return 0;
  }
  std::vector<double> sortVector(vector_);
  std::sort(sortVector.begin(), sortVector.end());
  int index = std::ceil((level_ * sortVector.size()) / 100) - 1;
  if (index >= sortVector.size()) {
    index = sortVector.size() - 1;
  }
  return sortVector[index];
}

const char *Percentile::name() const { return name_.c_str(); }