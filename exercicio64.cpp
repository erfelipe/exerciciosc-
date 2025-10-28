#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main() {
  int vet[100];
  srand(time(0));
  int menorIdade = 0, maiorIdade = 0, media = 0;
  for (int i=0; i<100; i++){
    vet[i] = rand() % 100;
    cout << "idade aleatoria: " << vet[i] << endl;//conferir
    //decisao do maior e menor
    if (i == 0) {
      maiorIdade = vet[0];
      menorIdade = vet[0];
    } else {
      if (vet[i] > maiorIdade) {
        maiorIdade = vet[i];
      }
      if (vet[i] < menorIdade) {
        menorIdade = vet[i];
      }
    }
    //media
    media = media + vet[i];
  }//fim do for
  media = media / 100;
  cout << "Maior idade: " << maiorIdade << endl;
  cout << "Menor idade: " << menorIdade << endl;
  cout << "Media das idades: " << media << endl;

  return 0;
}