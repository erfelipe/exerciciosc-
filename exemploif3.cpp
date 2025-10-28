#include <iostream>
using namespace std;
int main() {
  int tituloEleitor = 0, idade = 0;
  cout << "Digite o num titulo ou zero: ";
  cin >> tituloEleitor;
  cout << "Digite a idade: ";
  cin >> idade;

  if ( (tituloEleitor > 0) && (idade >= 16) )
  {
    cout << "Voceh pode votar." << endl;
    cout << "Vai la na cabine" << endl;
  } else 
  {
    cout << "Voceh nao pode votar." << endl;
  }

  return 0;
}