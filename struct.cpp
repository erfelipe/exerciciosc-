#include <iostream>
#include <vector>
using namespace std;

struct pessoaFisica {
  string nome;
  int idade;
  char sexo;
};

int main() {
  pessoaFisica pessoa; // uma pessoa
  vector<pessoaFisica> pessoas; //um vetor de pessoas
  
  pessoa.nome = "Fulano de tal";
  pessoa.idade = 10;
  pessoa.sexo = 'M';

  pessoas.push_back(pessoa);
  
  for(pessoaFisica p : pessoas) {
    cout << p.nome << endl;
  }
  return 0;
}