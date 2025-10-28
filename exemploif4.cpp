#include <iostream>
using namespace std;
int main() {
  int tituloEleitor = 0, idade = 0;
  cout << "Digite um num de titulo ou zero para nenhum: ";
  cin >> tituloEleitor;
  cout << "Digite a sua idade: ";
  cin >> idade;

  if (idade >= 16) {
    if (tituloEleitor > 0) {
      cout << "Voceh pode votar.";
    } else {
      cout << "Voceh NAO pode votar, pq nao tem titulo.";
    }
  } else {
    cout << "Voceh NAO pode votar, pq nao tem idade.";
  }
  return 0;
}