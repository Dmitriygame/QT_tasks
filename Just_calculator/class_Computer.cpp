#include "class_Computer.h"
Computer::Computer() {}

Computer::~Computer() {}

void Computer::input() {
  std::cout << "Enter the first number: ";
  std::cin >> this -> a;
  std::cout << "Enter the second number: ";
  std::cin >> this -> b;
  std::cout << "Enter the operation sign(+,-,*,/): ";
  std::cin >> this -> sign;
}

void Computer::calculate() {
  if (sign == '+')
    result = a + b;
  else if (sign == '-')
    result = a - b;
  else if (sign == '*')
    result = a * b;
  else if (sign == '/')
    result = a / b;
  else
    std::cout << "Input error!\n";

}

float Computer::getResult() {
  return result;
}
