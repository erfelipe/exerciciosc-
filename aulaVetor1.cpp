#include <iostream>
using namespace std;

int main() {
  int nums[5];
  // entrada de dados
  for (int i=0; i<5; i++){
    cout << "Digite um número: " ;
    cin >> nums[i];
  }
  //conferir se os dados foram gravados:
  for (int i=0; i<5; i++){
    cout << "Num na posicao " << i << " " << nums[i] <<endl;
  }

  //como gravar em uma posicao especifica do vetor:
  nums[2] = 120;
  //imprimir uma posicao especifica: 
  cout << nums[2];
  return 0;
}