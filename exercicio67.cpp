#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
bool verificaExisteB(int num, int vetB[100]) {
  for (int i=0; i<100; i++) {
    if (vetB[i] == num) {
      return true;
    }
  }
  return false;
}
int main() {
  int vetA[100], vetB[100], vetC[100];
  srand(time(0));
  //gera os nums
  for (int i=0; i<100; i++) {
    vetA[i] = rand() % 100;
  } 
  //verifica se ja foi somado
  for (int i=0; i<100; i++) {
    if (!verificaExisteB(vetA[i], vetB)) {
     vetB[i]
    }
  }


  return 0;
}