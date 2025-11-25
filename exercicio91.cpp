#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main() {
  ofstream outArq;
  srand(time(0));
  
  outArq.open("numerosaleatorios.txt");

  if (!outArq) {
    cout << "Problema ao abrir o arq.";
    abort();
  }

  for (int i=0; i<350; i++) {
    outArq << rand() % 970 << endl;
  }
  
  outArq.close();

  return 0;
}