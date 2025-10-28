#include <iostream>
using namespace std;

float dividir(float n1, float n2){
  if (n2 !=0) {
    return n1 / n2;
  } else {
    return 0;
  }
}

float somar(float n1, float n2) {
  float resp = n1 + n2;
  return resp;
}

float subtrair(float n1, float n2) {
  return n1 - n2;
}

float multiplicar(float n1, float n2) {
  return n1 * n2;
}

void linha() {
  cout << "-------------" << endl;
}

void imprimeLinha(char simbolo, int quant) {
  for (int i=0; i<=quant; i++) {
    cout << simbolo;
  }
  cout << endl;
}

int main() {
  float num1, num2;
  cout << "Digite um numero: ";
  cin >> num1;
  cout << "Digite um numero: ";
  cin >> num2;

  imprimeLinha('*', 20);
  float resp = dividir(num1, num2);
  cout << "A divisao eh: " << resp << endl;
  imprimeLinha('-', 25);
  float resp2 = multiplicar(num1, num2);
  cout << "A multiplicacao eh: " << resp2 << endl;
  linha();
  float resp3 = somar(num1, num2);
  cout << "A soma eh: " << resp3 << endl;
  linha();
  cout << "A subtracao eh: " << subtrair(num1, num2) << endl;
  return 0;
}