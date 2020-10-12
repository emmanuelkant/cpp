#include <cstdio>
using namespace std;

int main() {
  char csString[] = "String" " foo"; // Conctanation os literal strings
  printf("The value of csString is %s\n", csString);

  for( unsigned int i = 0; csString[i]; i++) {
    printf("%02d: %c\n", i, csString[i]);
  }


  return 0;
}