// 'Hello World!' program

#include <iostream>
#include "Foo.h"

int main()
{



  std::cout << "Hello meo meo Ankush!" << std::endl;

  Foo *f = new Foo();
  f->print();

  return 0;
}
