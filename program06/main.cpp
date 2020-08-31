#include <cstdio>
using namespace std;

int main() {
  // This
  char string[] = {'S', 't', 'r', 'i', 'n', 'g', 0};
  printf("This is a value %s\n", string);
  // And this
  char otherString[] = "String";
  printf("This is a value %s\n", otherString);
  // Has the same value

  /// The following loops has the same value 

  for(int i = 0; string[i] != 0; i++) {
    printf("The char is %c\n", string[i]);
  }

  for(char *cp = string; *cp; *cp++) {
    printf("From the pointer, char value is %c\n", *cp);
  }

  for(char c : string) {
    if (c == 0) break;
    printf("The char value is %c\n", c);
  }

  return 0;
}