#pragma once
#include <string.h>
class Computer {
  public:
    Computer();
    ~Computer();
    void Input();
    string Calculate();

  private:
     int a, b;
     float result;
     char sign;
};
