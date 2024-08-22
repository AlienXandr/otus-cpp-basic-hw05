#include "statistic.h"

#ifndef INC_05_HOMEWORK_MAX_H
#define INC_05_HOMEWORK_MAX_H

class Max : public Statistic {
public:
  Max();
  void update(double next) override;
  double eval() const override;
  const char *name() const override;

private:
  double max_;
};

#endif // INC_05_HOMEWORK_MAX_H
