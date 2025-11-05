#include <iostream>

using namespace std;
int main() {
  string frase1, frase2; 
  cout << "Digite frase 1: " ;
  getline(cin, frase1);
  cout << "Digite frase 2: " ;
  getline(cin, frase2);

  cout << "Quant frase 1: " << frase1.length() << endl;
  cout << "Quant frase 2: " << frase2.length() << endl;

  if (frase1.compare(frase2) == 0) {
    cout << "Frases iguais"<< endl;
  } else {
    cout << "Frases diferentes" << endl;
  }

  return 0;
}