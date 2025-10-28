#include <iostream>
using namespace std;
int main()
{
  int codigo = 0;
  cout << "Digite o codigo do prod";
  cin >> codigo;

  if (codigo == 1) {
    cout << "Alimento nao perecivel" << endl;
  } else if ( (codigo == 2) || (codigo == 3) || (codigo == 4) ) {
    cout << "Alimento perecivel." << endl;
  } else if ( (codigo ==5) || (codigo == 6) ) {
    cout << "Vestuario" << endl;
  } else if (codigo == 7) {
    cout << "Higiene" << endl;
  } else if ( (codigo >= 8) && (codigo <= 15) ) {
    cout << "Limpeza" << endl;
  } else {
    cout << "Codigo invalido." << endl;
  }

  return 0;
}