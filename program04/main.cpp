#include <cstdio>
using namespace std;

int main(){
  int x = 7;
  int *ip = &x;
  int &y = x;
  printf("x is %d\n", x);
  printf("ip is %d\n", *ip);
  printf("y is %d\n", y);

  x = 34;
  printf("x is %d\n", x);
  printf("ip is %d\n", *ip);
  printf("y is %d\n", y);
  int g = 6;
  y = g;

  printf("g is %d\n", g);
  printf("y is %d\n", y);
  printf("x is %d\n", x);
  printf("ip is %d\n", *ip);
  return 0;
}
