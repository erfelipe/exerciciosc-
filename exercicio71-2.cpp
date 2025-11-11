#include <iostream>
using namespace std;

struct alunosStruct {
  int ra;
  string nome;
  float nota1, nota2;
};

int main() {
  alunosStruct alunos[4];

  for(int i=0; i<4; i++) {
    cout << "Digite um RA: ";
    cin >> alunos[i].ra;
    cout << "Digite um nome: ";
    getline(cin, alunos[i].nome);
    cout << "Digite a nota 1: ";
    cin >> alunos[i].nota1;
    cout << "Digite a nota 2: ";
    cin >> alunos[i].nota2;
    // OU usar um cin de uma linha:
    cin >> alunos[i].ra >> alunos[i].nome >> alunos[i].nota1 >> alunos[i].nota2 ;
  }

  for(int i=0; i<4; i++) {
    if (( (alunos[i].nota1 + alunos[i].nota2) / 2) >= 60){
      cout << "O aluno: " << alunos[i].nome << " foi aprovado" << endl;
    } else {
      cout << "O aluno: " << alunos[i].nome << " foi reprovado" << endl;
    }
  }
  return 0;
}