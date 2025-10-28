#include <iostream> 
using namespace std; 

int main() {
  //ler o problema e descobrir as primeiras variaveis
  float raio = 0; 
  float area = 0;
  float pi = 3.14; //opcional 
  //solicitar ao usuario os dados necessarios
  cout << "Informe a raio do circulo: " ;
  cin >> raio; 
  //realizar o calculo desejado 
  area = 3.14 * (raio * raio) ;
  //feito o calculo mostrar a resposta no monitor
  cout << "A area da circunferencia eh: " << area << endl;
  return 0;
} 