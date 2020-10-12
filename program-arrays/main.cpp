#include <cstdio>
using namespace std;

int main(){
  int ia[5] = {1, 2, 3, 4, 5};
  printf("the first position is %d\n", ia[0]);
  int ib[5];
  ib[0] = 1;
  ib[1] = 4;
  int *ip = ib;
  ip = ip + 2;
  *ip = 6;
  ++ip;
  *ip = 83;
  *(++ip) = 120;
  printf("The 1º position of array is %d\n", ib[0]);
  printf("The 2º position of array is %d\n", ib[1]);
  printf("The 3º position of array is %d\n", ib[2]);
  printf("The 4º position of array is %d\n", ib[3]);
  printf("The 5º position of array is %d\n", ib[4]);
  return 0;
}
