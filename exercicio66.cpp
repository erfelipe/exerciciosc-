#include <iostream>
#include <ctime>
#include <cstdlib>
#include <random>
using namespace std;
int main() {
  int mat[3][3];

  srand(time(0));
  //preenchemos a matriz 
  for (int i=0; i<3; i++) {
    for (int j=0; j<3; j++) {
      mat[i][j] = rand() % 50;
    }
  }
  // pega o numero do usuario
  int numUsuario = 0;
  cout << "Digite um numero: " ;
  cin >> numUsuario;

  // verifica se o numero esta na matriz 
  bool achou = false;
  for (int i=0; i<3; i++) {
    for (int j=0; j<3; j++) {
      if (mat[i][j] == numUsuario) {
        achou = true;
        break;
      } 
    }
  }
  if (achou) {
    cout << "Parabéns vc acertou. " << endl ;
  } else {
    cout << "O num digitado nao esta na mat." << endl;
  } 
  // conferencia da matriz gerada aleatoria 
  for (int i=0; i<3; i++) {
    for (int j=0; j<3; j++) {
      cout << mat[i][j] << " | " ;
    } 
      cout << endl;
  }
  
  return 0;
}