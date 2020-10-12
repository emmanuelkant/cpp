#include <cstdio>
using namespace std;

int main() {
  int x = 42;
  int y = 7;

  if (x > y) {
    puts("The condition is true");
  } else if (y > 120) {
    puts("else if is true");
  } else {
    puts("The condition is false");
  }

  // The value of condition always is evaluated to 0 or 1
  printf("The value is %d\n", x > y);
  printf("The value is %d\n", x < y);

  // Conditions can receive 0 or 1 as false or true 
  if (0) { // Equals false
    puts("This is true");
  } else {
    puts("This is false");
  }

  // Any non-zero value is evaluated to true
  if (128) {
    puts("This is true");
  }

  // We can still use the ternary operator 
  printf("The greater value is %d\n", x > y ? x : y);

  return 0;
}