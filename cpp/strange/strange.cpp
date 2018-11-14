#include <iostream>

struct D
{
  int c;

  int get_1() { return 0; }
  int get_2() { return 2; }
};

class A
{
public:
  A() {};

public:
  void test(D &d)
  {
    if (auto v1 = d.get_1())
    {
      std::cout << v1 << std::endl;
    }
    else if (auto v2 = d.get_2())
    {
      std::cout << v1 << " : " << v2 << std::endl;
    }
  }
};

int main()
{
  A a;
  D d;

  a.test(d);

  return 0;
}