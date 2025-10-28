#include <iostream>
using namespace std;
int main()
{
  int a = 0, b = 0, resposta=1;
  cout << "Digite a base: ";
  cin >> a; 
  cout << "Digite o expoente: ";
  cin >> b; 
  for (int i=1; i<=b; i++) {
    resposta = resposta * a;
  }
  cout << "O exponencial eh " << resposta;
  return 0;
}