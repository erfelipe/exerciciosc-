#include <iostream>
#include <vector>
#include <stdlib.h>
#include <ctime>
using namespace std;
int main() {
  vector<int> numeros;  
  char controle = 's';
  int quant;
  cout << "Digite quantos nums:";
  cin >> quant;

  srand(time(0));

  for (int i=0; i<quant; i++) {
    numeros.push_back(rand() % 400);
  }

  int contPar = 0;
  int contImpar = 0;

  for(int num : numeros) {
    if (num % 2 == 0) {
      contPar++;
    } else {
      contImpar++;
    }
  }

  cout << "A quant de pares: " << contPar << endl;
  cout << "A quant de impares: " << contImpar << endl;

  for (int i=0; i < numeros.size(); i++) {
    if(numeros[i] % 2 == 0){

    }
  }



  return 0;
}