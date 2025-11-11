#include <iostream>
#include <vector>
using namespace std;

struct alunosStruct {
  int ra;
  string nome;
  float nota1, nota2;
};

int main() {
  vector<alunosStruct> alunos;
  alunosStruct umAluno;

  for (int i=0; i<4; i++) {
    //gerar UM aluno
    cout << "Digite um RA: ";
    cin >> umAluno.ra;
    cout << "Digite um nome: ";
    getline(cin, umAluno.nome);
    cout << "Digite a nota 1: ";
    cin >> umAluno.nota1;
    cout << "Digite a nota 2: ";
    cin >> umAluno.nota2;
    //gravar UM aluno no vetor
    alunos.push_back(umAluno);
  }

  //avaliacao de aprov e reprov
  for (int i=0; i<4; i++) {
    if (( (alunos[i].nota1 + alunos[i].nota2) / 2) >= 60) {
      cout << "O aluno: " << alunos[i].nome << " foi aprovado" << endl;
    } else {
      cout << "O aluno: " << alunos[i].nome << " foi reprovado" << endl;
    }
  }

  return 0;
}