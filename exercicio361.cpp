#include <iostream>
using namespace std;
int main()
{
  int codigo = 0;
  cout << "Digite o codigo do prod";
  cin >> codigo;

  switch(codigo){
    case 1: 
      cout << "Prod nao perecivel" << endl;
      break;
    case 2:
    case 3:
    case 4: 
      cout << "Prod perecivel" << endl;
      break;
    case 5: case 6:
      cout << "Vestuario" << endl;
      break;
    case 7:
      cout << "Higiene" << endl;
      break;
    case 8: case 9: case 10: 
     cout << "Limpeza " << endl;
     break;
    default:
     cout << "Codigo invalido" << endl;
  }

  return 0;
}