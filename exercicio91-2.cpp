#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>
using namespace std;

int sorteio() {
  return rand() % 970;
}

int main() {
  ofstream outArq;
  srand(time(0));
  
  outArq.open("numerosaleatorios.txt");

  if (!outArq) {
    cout << "Problema ao abrir o arq.";
    abort();
  }

  for (int i=0; i<350; i++) {
    outArq << sorteio() << endl;
  }
  
  outArq.close();

  return 0;
}