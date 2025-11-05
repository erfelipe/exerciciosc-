#include <iostream>
#include <vector>
#include <stdlib.h>
#include <ctime>
using namespace std;
int main() {
  vector<int> numeros;
  int quant = 0;
  int aleatorio = 0;
  cout << "Digite a quant de nums: ";
  cin >> quant;

  srand(time(0));
  //para gerar numeros aleatorios com + e - 
  for (int i=0; i<quant; i++) {
    aleatorio = rand() % 400 - 200;
    numeros.push_back(aleatorio);
    cout << aleatorio << endl;
  }

  //quant de numeros negativos 
  int contNumNegativo = 0;
  //soma dos numeros positivos 
  int somaNumPositivos = 0;
  for (int i=0; i<quant; i++) {
    if (numeros[i] >= 0) {
      somaNumPositivos = somaNumPositivos + numeros[i];
    } else {
      contNumNegativo++;
    }
  }
  cout << "A soma dos + :" << somaNumPositivos << endl;
  cout << "A quant de - :" << contNumNegativo << endl;
  return 0;
}