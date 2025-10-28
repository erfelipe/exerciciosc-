#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main() {
  int vet[200];
  srand(time(0)); //iniciar uma sequencia aleatoria
  int contPar = 0;
  int contImpar = 0;
  for (int i=0; i<200; i++){
    vet[i] = rand() % 900;
    cout << vet[i] << endl; //conferir
    if (vet[i] % 2 == 0) {
      contPar++;
    } else {
      contImpar++;
    }
  }
  cout << "Pares: " << contPar << endl;
  cout << "Impares: "<< contImpar << endl;
  return 0;
} 