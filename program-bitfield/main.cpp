#include <cstdio>
using namespace std;

struct preferences {
  bool likesMusic : 1;
  bool hasHair : 1;
  bool hasInternet : 1;
  bool hasDinosaur : 1;
  unsigned int numberofChildren : 4;
};

int main() {
  struct preferences homer;
  homer.likesMusic = true;
  homer.hasHair = false;
  homer.hasInternet = true;
  homer.hasDinosaur = false;
  homer.numberofChildren = 3;

  printf("sizeof int: %ld bits \n", sizeof(int) * 8);
  printf("sizeof homer: %ld bits\n", sizeof(homer) * 8);

  if(homer.likesMusic) printf("homer likes music\n");
  if(homer.hasHair) printf("homer has hair\n");
  if(homer.hasInternet) printf("homer has internet\n");
  if(homer.hasDinosaur) printf("homer has dinosaur\n");
  printf("homer has %d children\n", homer.numberofChildren);
  return 0;
}