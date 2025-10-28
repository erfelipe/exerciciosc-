#include <iostream>
using namespace std;

void imprimeLinha(int d1, int d2, int d3, int d4, int d5, int d6, int d7) {
  for(int i=0; i<d1; i++){
    cout << "*" ;
  }
  cout << endl;
  //solucao ruim
}

void imprimeLinha(int temperatura) {
  for(int i=0; i<temperatura; i++){
    cout << "*" ;
  }
  cout << endl;
}

int main() {
  int d1, d2, d3, d4, d5, d6, d7;
  cout << "Informe as temperaturas separadas por espaço:";
  cin >> d1 >> d2 >> d3 >> d4 >> d5 >> d6 >> d7;
  imprimeLinha(d1);
  imprimeLinha(d2);
  imprimeLinha(d3);
  imprimeLinha(d4);
  imprimeLinha(d5);
  imprimeLinha(d6);
  imprimeLinha(d7);

  imprimeLinha(d1, d2, d3, d4, d5, d6, d7);
  return 0;
}