#include <iostream>
using namespace std;

struct aluno{
  string nome;
  int ra, idade;
};

int main() {
  int exemplo;
  struct aluno alu;

  exemplo = 17;
  alu.nome = "Jose Fino";
  alu.ra = 12345;
  alu.idade = 22;

  cout << exemplo << endl;
  cout << alu.nome << endl;

  return 0;
}