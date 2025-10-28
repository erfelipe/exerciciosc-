#include <iostream>
using namespace std;

float calcularIMC(float altura, float peso) {
  float resp = peso / (altura * altura) ;
  return resp;
}

void imprimeClassificacao(float imc) {
  if (imc <= 18.5) {
    cout << "Abaixo do peso." << endl;
  } else if ( (imc > 18.5) && (imc <= 24.9) ) {
    cout << "Peso ideal" << endl;
  }
}

int main() {
  float altura, peso;
  
  cout << "Digite altura" ;
  cin >> altura;
  cout << "Digite peso";
  cin >> peso;

  float imc = calcularIMC(altura, peso);
  imprimeClassificacao(imc);
  
  if (imc <= 18.5) {
    cout << "Abaixo do peso." << endl;
  } else if ( (imc > 18.5) && (imc <= 24.9) ) {
    cout << "Peso ideal" << endl;
  }

  return 0;
}