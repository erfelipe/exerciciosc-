#include <iostream> 
using namespace std;

int main() {
  //ler o problema e descobrir as primeiras variaveis
  float celsius = 0;
  float fari = 0; 
  //solicitar ao usuario os dados necessarios
  cout << "Informe a temp em Celsius: " ;
  cin >> celsius;
  //realizar o calculo desejado 
  fari = ( 9.0 / 5.0) * celsius + 32 ;
  //feito o calculo mostrar a resposta no monitor 
  cout << "A temp em Fahrenheit eh: " << fari << endl;
  return 0;
}
