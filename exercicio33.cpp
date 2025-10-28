#include <iostream>
using namespace std;
int main()
{
  int quantLivros = 0;
  cout << "Digite quantos livros: ";
  cin >> quantLivros;
  float criterioA, criterioB = 0;

  criterioA = 0.25 * quantLivros + 7.50;
  criterioB = 0.50 * quantLivros + 2.50;

  if (criterioA < criterioB) {
    cout << "Use o criterio A pois eh menor";
  } else {
    cout << "Use o criterio B pois eh menor";
  }

  cout << "Valor do A: " << criterioA << endl;
  cout << "Valor do B: " << criterioB << endl;

  return 0;
}