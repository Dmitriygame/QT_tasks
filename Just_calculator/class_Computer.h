#pragma once
#include <iostream>

class Computer {
  public:
    Computer();
    ~Computer();
    void input();
    void calculate();
    float getResult();

  private:
    float a, b, result = 0;
    char sign;
};
