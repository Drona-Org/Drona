// 'Hello World!' program

#include <iostream>
#include "Foo.h"

int main()
{



  std::cout << "Hello Ankush!" << std::endl;

  Foo *f = new Foo();
  f->print();

  return 0;
}
