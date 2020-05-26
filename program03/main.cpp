#include <cstdio>
using namespace std;

int main(){
  int x;
  x = 7;
  int *ip;
  ip = &x;
  int y = x;
  y = *ip;
  printf("X is %d\nY is %d\nip is %d\n", x, y, *ip);
  return 0;
}
