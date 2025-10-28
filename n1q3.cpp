#include <iostream>
using namespace std;

int main() {

  // for (int y=10; y<=30; y++){
  //   int multiplo = y*10;
  //   cout << multiplo << endl;
  // }

  for(int i=99; i<=300; i++ ){
    if (i % 10 == 0) {
      cout << i << endl;
    } else {
      cout << i << "nao eh multiplo de 10" << endl;
    }
  }

  return 0;
}