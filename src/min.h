#include "statistic.h"

#ifndef INC_05_HOMEWORK_MIN_H
#define INC_05_HOMEWORK_MIN_H
class Min : public Statistic {
public:
  Min();
  void update(double next) override;
  double eval() const override;
  const char *name() const override;

private:
  double min_;
};

#endif // INC_05_HOMEWORK_MIN_H
