#include <iostream>

using namespace std;
int main() {
  int vetID[9], vetPeso[9];
  //preencher os vetores 
  for (int i=0; i<9; i++){
    cout << "Digite o ID do boi: ";
    cin >> vetID[i];
    cout << "Digitar o Peso do boi: ";
    cin >> vetPeso[i];
  }
  //descobrir o mais gordo e mais magro
  int gordo = vetPeso[0];
  int idGordo = vetID[0];
  int magro = vetPeso[0];
  int idMagro = vetID[0];
  for (int i=0; i<9; i++) {
    if (vetPeso[i] > gordo) {
      gordo = vetPeso[i];
      idGordo = vetID[i];
    }
    if (vetPeso[i] < magro) {
      magro = vetPeso[i];
      idMagro = vetID[i];
    }
  }
  cout << "O boi mais gordo, possui o id: " << idGordo << " e seu peso: " << gordo << endl;
  cout << "O boi mais magro, possui o id: " << idMagro << " e seu peso: " << magro << endl;

  return 0;
}