#include <iostream>
#include <iterator>
using namespace std;

int main() {
  int temperaturas[7]; // 7 eh o total de posicoes
  // A) obter os valores das temp
  for (int i=0; i<7; i++) {
    cout << "Digite uma temp: ";
    cin >> temperaturas[i];
  }

  // B) calcular a media 
  float media = 0;
  for (int i=0; i<7; i++){
    media = media + temperaturas[i];
  }
  media = media / 7.0;

  // C) quantas temperaturas sao > que a media 
  int contador = 0;
  for (int i=0; i<7; i++) {
    if (temperaturas[i] > media) {
      contador++;
      cout << "A temp: " << temperaturas[i] << " eh > media" << endl;
    }
  }
  cout << contador << " temperaturas > que a media" << endl;
  cout << sizeof(temperaturas) / sizeof(int) << endl;
  return 0;
}