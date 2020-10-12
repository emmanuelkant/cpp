#include <cstdio>
using namespace std;

int main() {

  int array[] = {1, 2, 3, 4, 5}; 

  for (int i : array) {
    printf("The i value is %d\n", i);
  }

  puts("==========");

  char s[] = "string";

  for (char c : s) {
    if ( c == 0 ) break;
    printf("The c value is %c\n", c);
  }

  puts("==========");

  for (char c : "string") {
    if ( c == 0 ) break;
    printf("The c value is %c\n", c);
  }

  return 0;
}