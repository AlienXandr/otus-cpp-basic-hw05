#include "statistic.h"
#include <string>
#include <vector>

#ifndef INC_05_HOMEWORK_PERCENTILE_H
#define INC_05_HOMEWORK_PERCENTILE_H

class Percentile : public Statistic {
public:
  Percentile(double level, std::vector<double> &vector);
  void update(double next) override;
  double eval() const override;
  const char *name() const override;

private:
  std::string name_;
  double level_;
  std::vector<double> &vector_;
};

#endif // INC_05_HOMEWORK_PERCENTILE_H
