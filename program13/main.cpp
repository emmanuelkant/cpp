#include <cstdio>
using namespace std;

const int byte = 8;

int main() {

  printf("sizeof char is %ld bits\n", sizeof(char) * byte);
  printf("sizeof short is %ld bits\n", sizeof(short) * byte);
  printf("sizeof int is %ld bits\n", sizeof(int) * byte);
  printf("sizeof long int is %ld bits\n", sizeof(long int) * byte);
  printf("sizeof long long int is %ld bits\n", sizeof(long long int) * byte);

  return 0;
}