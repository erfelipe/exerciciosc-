#include <iostream>
using namespace std;
int main()
{
  float nota1, nota2, nota3 = 0;
  cout << "Digite a nota 1: ";
  cin >> nota1;
  cout << "Digite a nota 2: ";
  cin >> nota2;
  cout << "Digite a nota 3: ";
  cin >> nota3;

  float media = (nota1 + nota2 + nota3) / 3;
  if (media >= 7) {
    cout << "Você foi aprovado(a)" << endl;
  } else {
    float sub =0;
    cout << "Digite a nota da sub: ";
    cin >> sub; 
    float notaFinal = 0;
    notaFinal = (media + sub) / 2 ;
    if (notaFinal >= 6) {
      cout << "Você foi aprovado(a)";
    } else {
      cout << "Você foi reprovado(a).";
    }
  }


  return 0;
}