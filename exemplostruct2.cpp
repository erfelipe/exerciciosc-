#include <iostream>
#include <vector>
using namespace std;

struct boi {
  int peso;
  int id;
  int idade;
};

int main() {
  vector<boi> boiada;
  struct boi animal;

  for (int i=0; i<2; i++) {
    //cadastra UM boi na variavel animal
    cout << "Digite o peso do boi:";
    cin >> animal.peso;
    cout << "Digite o id do boi: ";
    cin >> animal.id;
    cout << "Digite a idade do boi: ";
    cin >> animal.idade;
    //guarda UM boi no vetor boiada
    boiada.push_back(animal);
  }

  for (int i=0; i<2; i++ ) {
    cout << "Imprimir o boi " << i+1 << " : " << endl;
    cout << "Idade: " << boiada[i].idade << " peso: " << boiada[i].peso << endl;
  }

  return 0;
}