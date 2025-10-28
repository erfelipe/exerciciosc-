#include <iostream>

using namespace std;

int main() {
  //cria o vetor
  int vet[10];
  //preenche o vetor 
  for (int i=0; i<10; i++){
    cout << "Digite :" ;
    cin >> vet[i];
  }
  int maior, menor;
  maior = vet[0]; //o primeiro começa como maior
  menor = vet[0]; //o primeiro começa como menor
  //descobrir quem eh o maior ou menor REAL
  for (int i=0; i < 10; i++) {
    if (vet[i] > maior) {
      maior = vet[i];
    }
    if (vet[i] < menor) {
      menor = vet[i];
    }
  }
  cout << "O maior num eh: " << maior << endl;
  cout << "O menor num eh: " << menor << endl;

  return 0;
}