#ifndef INC_05_HOMEWORK_STATISTICS_H
#define INC_05_HOMEWORK_STATISTICS_H

class Statistic {
public:
  virtual ~Statistic() = default;

  virtual void update(double next) = 0;
  virtual double eval() const = 0;
  virtual const char *name() const = 0;
};

#endif // INC_05_HOMEWORK_STATISTICS_H
