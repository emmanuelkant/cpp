#include <cstdio>
using namespace std;

class S{
  public:
    int static_value() {
      static int x = 7; // Will be created one object for every instance. 
      return ++x;
    }
};

int func() {
  static int x = 7; // For every call, the variable will be incremented.
  return ++x;
}

int main() {
  int integer = 42;
  printf("The integer is %d\n", integer);
  return 0;
}