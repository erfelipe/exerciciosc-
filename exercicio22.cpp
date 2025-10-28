#include <iostream> 
using namespace std; 

int main() {
  //ler o problema e descobrir as primeiras variaveis
  float base = 0;
  float altura = 0;
  float area = 0;
  //solicitar ao usuario os dados necessarios
  cout << "Informe a base do triangulo: "; 
  cin >> base; 
  cout << "Informe a altura do triangulo: "; 
  cin >> altura; 
  //realizar o calculo desejado 
  area = base * altura / 2 ;
  //feito o calculo mostrar a resposta no monitor 
  cout << "A area do triangulo eh: " << area << endl;
  return 0;
}