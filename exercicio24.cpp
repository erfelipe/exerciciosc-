#include <iostream> 
using namespace std; 

int main() {
//ler o problema e descobrir as primeiras variaveis
  float base1 = 0;
  float base2 = 0;
  float altura = 0; 
  float area = 0;
//solicitar ao usuario os dados necessarios
  cout << "Digite a base1: ";
  cin >> base1;
  cout << "Digite a base2: ";
  cin >> base2;
  cout << "Digite a altura: ";
  cin >> altura;
//realizar o calculo desejado 
  area = ((base1 + base2) * altura) / 2 ;
//feito o calculo mostrar a resposta no monitor
  cout << "A area do trapezio eh: " << area << endl;
  return 0;
}