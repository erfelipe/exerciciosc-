#include <iostream>
using namespace std;
int main()
{
  int num = 0;
  cout << "Digite um numero: " ;
  cin >> num; 
  int soma = 0;
  for (int i=1; i <= num; i++) {
    soma = soma + i;
    cout << "Soma de: " << soma << " + " << i << endl;
    cout << "A soma atual: " << soma << endl;
  }
  return 0;
}