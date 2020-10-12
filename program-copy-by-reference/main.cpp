#include <cstdio>
using namespace std;

// This explein the famous question. The <Programming Language> do copy by reference or by value?

int &f(int &i) {
  return ++i;
}

int main() {

  int i = 5;
  int &ir = i;
  ir = 10;
  printf("The value of i is %d\n", i);
  printf("f() is %d\n", f(i));
  printf("i is %d\n", i);

  return 0;
}