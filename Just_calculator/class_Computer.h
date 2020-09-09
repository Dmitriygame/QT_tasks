#pragma once
#include <iostream>
#include <stdio.h>

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
