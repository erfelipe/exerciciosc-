#include <iostream>
using namespace std;

void somar(float a, float b ) {
  float resp;
  resp = a + b;
  cout << "A soma eh: " << resp;
}

float subtrair(float n1, float n2){
  float resp;
  resp = n1 - n2;
  return resp;
}

int main() {
  float n1, n2;
  cout << "Digite um num: ";
  cin >> n1;
  cout << "Digite um num: ";
  cin >> n2;
  somar(n1, n2);
  
  float diferenca = subtrair(n1, n2);
  cout << "A subtracao eh: " << diferenca << endl;



  return 0;
}