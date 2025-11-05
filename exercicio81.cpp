#include <iostream>

using namespace std;
int main() {
  string frase;
  cout << "Digite uma frase: ";
  getline(cin, frase);

  for(int i=frase.length(); i>=0; i-- ){
    cout << frase[i];
  }


  return 0;
}