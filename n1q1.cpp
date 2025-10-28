#include <iostream>
using namespace std;

int main() {
  int notaFinal = 0;
  cout << "Digite a nota final: ";
  cin >> notaFinal;

  if ( (notaFinal > 0) && (notaFinal < 50) ){
    cout << "Reprovado";
  } else if ( (notaFinal >= 50) && (notaFinal <= 59) ) {
    cout << "Recuperação" ;
  } else if ( (notaFinal >= 60) && (notaFinal <= 100) ) {
    cout << "Aprovada" ;
  } else {
    cout << "Nota errada";
  }

  return 0;
}