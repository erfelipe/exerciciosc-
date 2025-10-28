#include <iostream>
#include <math.h>
using namespace std;
int main()
{
  int a = 0;
  int b = 0;
  int c = 0;
  float raiz1 = 0;
  float raiz2 = 0;

  cout << "Digite o valor de a: " ;
  cin >> a;
  cout << "Digite o valor de b: " ;
  cin >> b;
  cout << "Digite o valor de c: " ;
  cin >> c;
  //ja podemos calcular 
  raiz1 = ( -b + sqrt( (b * b) - (4 * a * c) ) ) / 2 * a ;
  raiz2 = ( -b - sqrt( (b * b) - (4 * a * c) ) ) / 2 * a ;
  //mostrar a resp para o usuario 
  cout << "A primeira raiz eh: " << raiz1 << endl;
  cout << "A segunda raiz eh: " << raiz2 << endl;

  return 0;
}