#include <iostream>
#include <vector>
using namespace std;
int main() {
  //cria um vetor de inteiros vazio
  vector<int> numeros;
  //cria um vetor de decimais com valores
  vector<float> precos = {12.40, 100.50, 89.00};
  // insere valores no vetor
  numeros.push_back(77);
  numeros.push_back(120);
  // percorrer o vetor 
  for (int i=0; i < numeros.size(); i++) {
    cout << numeros[i] << endl;
  }  
  // percorrer o vetor
  for (float num : precos){
    cout << num << endl;
  }
  return 0;
}