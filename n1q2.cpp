#include <iostream>
using namespace std;

int main() {
  int n1, n2, n3, n4, n5;
  float mediaPonderada = 0;
  cout << "Digite um num:";
  cin >> n1;
  cout << "Digite um num:";
  cin >> n2;
  cout << "Digite um num:";
  cin >> n3;
  cout << "Digite um num:";
  cin >> n4;
  cout << "Digite um num:";
  cin >> n5;

  mediaPonderada = ( (1 * n1) + (2 * n2) + (3 * n3) + (4 * n4) + (5 * n5) ) / (1+2+3+4+5) ;

  cout << "A media eh: " << mediaPonderada;
  return 0; 
}