#include <cstdio>
using namespace std;

int main() {

  for(int i = 0; i < 5; i++) {
    printf("The value of i is %d\n", i);
  }

  puts("==========");

  char string[] = "abcdfg";

  for(int i = 0; string[i]; i++) { // Expect a zero at the final of string
    printf("The value of i is %c\n", string[i]);
  }

  puts("==========");

  for(char *cp = string; *cp; cp++) {
    printf("The value of *cp is %c\n", *cp);
  }

  return 0;
}