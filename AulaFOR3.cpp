#include <iostream>
#include <random> 
#include <ctime>
using namespace std;
int main()
{
  int numSorte = 0;
  cout << "Digite um num de 0 a 50";
  cin >> numSorte;
  srand(time(0));
  int aleatorio = 0;
  for (int i=0; i < 20; i++){
    aleatorio = rand() % 50; 
    if (numSorte == aleatorio) {
      cout << "BINGO! Voce acertou" << endl;
      break;
    } else {
      cout << "O num sorteado " <<aleatorio << "eh diferente da sua escolha." << endl;
    }
  }
}