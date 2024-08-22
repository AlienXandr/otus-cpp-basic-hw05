#include "statistic.h"

#ifndef INC_05_HOMEWORK_MEAN_H
#define INC_05_HOMEWORK_MEAN_H

class Mean : public Statistic {
public:
  Mean();
  void update(double next) override;
  double eval() const override;
  const char *name() const override;

private:
  double mean_;
  double sum_;
  double count_;
};

#endif // INC_05_HOMEWORK_MEAN_H
