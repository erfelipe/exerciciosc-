#include <iostream>
#include <vector>

using namespace std;
int main() {
  vector<int> numeros;  
  char controle = 's';
  int numDigitado;

  while (controle == 's')
  {
    cout << "Digite um num: " ;
    cin >> numDigitado;
    numeros.push_back(numDigitado);
    cout << "Deseja continuar? (s/n)";
    cin >> controle;
  }
  
  int numMaior = numeros[0];
  int numMenor = numeros[0];

  for (int i=0; i < numeros.size(); i++) {
    if (numeros[i] > numMaior) {
      numMaior = numeros[i];
    } 
    if (numeros[i] < numMenor) {
      numMenor = numeros[i];
    }
  }
  
  cout << "O maior num: " << numMaior << endl;
  cout << "O menor num: " << numMenor << endl;

  return 0;
}