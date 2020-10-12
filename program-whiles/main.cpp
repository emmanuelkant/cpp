#include <cstdio>
using namespace std;

int main() {

  int ia[] = {1, 2, 3, 4, 5};
  int count = 0;

  while(count < 5) {
    if ( count == 2 ) {
      ++count;
      continue;
    };
    if ( count == 4 ) break;
    printf("The element %d is %d\n", count, ia[count]);
    count ++;
  }
  count = 0;
  puts("==========");
  do {
    if ( count == 2 ) {
      ++count;
      continue;
    };
    if ( count == 4 ) break;
    printf("The element %d is %d\n", count, ia[count]);
    count ++;
  } while(count < 5);

  return 0;
}