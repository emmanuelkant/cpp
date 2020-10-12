#include <cstdio>
using namespace std;

#ifndef NULL
#define NULL (0LL) /* common C++ definition */
#endif

void f(int i) { // Overload
  printf("the int is %d\n", i);
};

void f(const char * s) { // Overload
  printf("the pointer is %p\n", s);
};

int main() {
  // f(NULL); This will not work because is ambiguous reference, the NULL can be a integer or a pointer
  f(nullptr); // This will work because the nullptr is unambiguous, it is a pointer to null
  return 0;
};