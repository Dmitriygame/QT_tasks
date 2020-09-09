#include "class_Computer.h"

Computer calculator;

int main() {
  calculator.input();
  calculator.calculate();
  std::cout << "Result: " << calculator.getResult() << "\n";
  return 0;
}
