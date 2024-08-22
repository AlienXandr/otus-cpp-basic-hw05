#include "src/max.h"
#include "src/mean.h"
#include "src/min.h"
#include "src/percentile.h"
#include "src/statistic.h"
#include "src/std.h"
#include <iostream>
#include <limits>
#include <vector>

void clear_cin() {
  std::cin.clear();
  std::cin.sync();
  std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}

int main() {

  const size_t statistics_count = 6;
  Statistic *statistics[statistics_count];

  std::vector<double> vector;
  statistics[0] = new Min{};
  statistics[1] = new Max{};
  statistics[2] = new Mean{};
  statistics[3] = new Std{vector};
  statistics[4] = new Percentile{90, vector};
  statistics[5] = new Percentile{95, vector};

  std::cout
      << "Введите последовательность чисел. \n"
      << "(Для остановки ввода нажмите: Ctrl+Z для Windows; Ctrl+D для Linux)"
      << std::endl;

  double val = 0;
  while (true) {
    std::cin >> val;
    // Для отладки, т.к. IDE CLion 2024.1.3 имеет проблемы с Ctrl+D в отладочной
    // консоли. Срабатывает завершение всего процесса, а не признак EOF (End Of
    // File)
    // https://youtrack.jetbrains.com/issue/CPP-5704
    //    if (val == -7) {
    //      break;
    //    }
    if (std::cin.good()) {
      vector.push_back(val);
      for (size_t i = 0; i < statistics_count; ++i) {
        statistics[i]->update(val);
      }
    } else if (std::cin.eof()) {
      break;
    } else {
      clear_cin();
      std::cout << "Invalid input data. Try again\n";
    }
  }

  // Print results if any
  for (size_t i = 0; i < statistics_count; ++i) {
    std::cout << statistics[i]->name() << " = " << statistics[i]->eval()
              << std::endl;
  }

  // Clear memory - delete all objects created by new
  for (size_t i = 0; i < statistics_count; ++i) {
    delete statistics[i];
  }

  return 0;
}