#include <iostream>
using namespace std;

void qqcoisa(float preco, int taxa){
  preco = preco + 100;
  taxa = taxa + 1;
}

void novoPreco(float* p, int* taxa) {
  *p = (*p * *taxa / 100) + *p;
  cout << "Novo preco: " << *p << endl;
  *taxa = *taxa+ 10;
}

int main() {
  float preco;
  int taxa;
  int* ptTaxa;
  float* ptPreco;

  cout << "Digite o preco base: ";
  cin >> preco;
  cout << "Taxa de juros: ";
  cin >> taxa;

  ptPreco = &preco; // a referencia da variavel preco (end memoria)
  ptTaxa = &taxa;

  novoPreco(ptPreco, ptTaxa);

  cout << " -- Conferencia -- " << endl;
  cout << "Preco digitado: " << preco << endl ;
  return 0;
}