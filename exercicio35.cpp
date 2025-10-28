#include <iostream>
using namespace std;
int main()
{
  int anoNasc = 0;
  cout << "Digite o ano de nascimento: " ;
  cin >> anoNasc;

  int idade = 2025 - anoNasc;
  cout << "Sua idade eh: " << idade << endl;
  //forma simples 
  if (idade >= 16) {
    cout << "Você já pode votar... " << endl;
  } else {
    cout << "Você não pode votar." << endl;
  }

  if (idade >= 18) {
    cout << "Você pode tirar a CNH." << endl;
  } else {
    cout << "Você não pode tirar a CNH." << endl;
  }

  //forma mais complexa 
  if (idade < 16) {
    cout << "Voce nao pode votar e nem dirigir." << endl;
  } else if ( (idade >= 16) && (idade < 18) ) {
    cout << "Voce so pode votar. " << endl;
  } else {
    cout << "Voce pode votar e CNH..." << endl;
  }

  return 0;
}