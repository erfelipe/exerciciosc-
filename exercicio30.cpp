#include <iostream>

using namespace std;
int main()
{
  float nota1 = 0, nota2 = 0, notaFinal = 0;

  cout << "Digite a nota 1: ";
  cin >> nota1;
  cout << "Digite a nota 2: ";
  cin >> nota2;

  notaFinal = nota1 + nota2;
  if (notaFinal >= 60) {
    cout << "Aluno(a) aprovado.";
  } else {
    cout << "Aluno(a) reprovado.";
  }

  return 0;
}