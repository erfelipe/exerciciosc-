#include <iostream>
using namespace std;
int main() {
  float notaFinal = 0;
  cout << "Digite a nota final: ";
  cin >> notaFinal;
  if (notaFinal < 50)
  {
    cout << "Aluno(a) reprovado(a)";
  } else if (notaFinal < 60)
  {
    cout << "Aluno(a) recuperação";
  } else 
  {
    cout << "Aluno(a) aprovado(a).";
  }
  
  cout << "Fim das aulas." << endl;
  return 0;
}