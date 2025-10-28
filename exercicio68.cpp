#include <iostream>

using namespace std;
int main() {
  float notas[5][2];
  // preenchemos a matriz 
  for (int i=0; i<5; i++) {
    for (int j=0; j<2; j++) {
    cout << "Digite a nota N" << j+1 << " para o aluno " << i+1 << ":" ;
    cin >> notas[i][j];
    }
  }
  // calcular a media e exibir aprov ou rep 
  float media = 0;
  for (int i=0; i<5; i++) {
    for (int j=0; j<2; j++) {
      media = media + notas[i][j];
    }
    media = media / 2;
    cout << "A media do aluno: " << i+1 << " eh " << media << endl ;
    if (media >= 7) {
      cout << "Aprovado" << endl;
    } else {
      cout << "Reprovado" << endl;
    }
    media = 0; 
  }
  return 0;
}