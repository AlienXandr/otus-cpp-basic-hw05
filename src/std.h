#include "statistic.h"
#include <vector>

#ifndef INC_05_HOMEWORK_STD_H
#define INC_05_HOMEWORK_STD_H

class Std : public Statistic {
public:
  Std(std::vector<double> &vector);
  void update(double next) override;
  double eval() const override;
  const char *name() const override;

private:
  std::vector<double> &vector_;
};

#endif // INC_05_HOMEWORK_STD_H
