#include <iostream>

using namespace std;
int main() {
  int numeros[2][2];
  //i controla as linhas 
  //j controla as colunas
  for(int i=0; i<2; i++) {
    for (int j=0; j<2; j++) {
      cout << "Digite um num: ";
      cin >> numeros[i][j];
    }
  }
  //imprimir a matriz
  for(int i=0; i<2; i++) {
    for (int j=0; j<2; j++) {
      cout << "Na posicao: " << i << " " << j << " :" ;
      cout << numeros[i][j] << endl;
    }
    cout << endl;
  }
  return 0;
}