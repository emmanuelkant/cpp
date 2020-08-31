#include <cstdio>
using namespace std;

int main() {
  const int iONE = 1;
  const int iTWO = 2;
  const int iTHREE = 3;
  const int iFOUR = 4;

  int x = 3;

  // A simple Switch
  switch (x) {
    case iONE: 
      puts("Your chosen the 1");
      break;
    case iTWO: 
      puts("Your chosen the 2");
      break;
    case iTHREE: 
      puts("Your chosen the 3");
      break;
    case iFOUR: 
      puts("Your chosen the 4");
      break;
    default: 
      puts("Your chosen the default");
  }

  return 0;
}