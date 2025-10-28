#include <iostream>
using namespace std;

int main() {
  int n1, n2, opcao;
  float resposta;
  cout << "Digite um num: ";
  cin >> n1;
  cout << "Digite um num: ";
  cin >> n2;
  cout << "Digite uma opcao 1, 2 ou 3: ";
  cin >> opcao;

  if (opcao == 1) {
    resposta = (n1 + n2) / 2;
    cout << "A media eh: " << resposta;
  } else if(opcao == 2) {
    resposta = n1 - n2;
    cout << "A difer eh: " << resposta;
  } else if (opcao == 3) {
    resposta = n1 * n2;
    cout << "A mult eh: " << resposta;
  } else {
    cout << "opcao invalida.";
  }

  return 0;
}