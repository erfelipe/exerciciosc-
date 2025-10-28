#include <iostream>
using namespace std;

void imprimeLinha() {
  cout << "-------------" << endl;
}
int main() {
  for(int i=0; i<=10; i++) {
    cout << "O valor do i: " << i << endl;
    imprimeLinha();
  }
  imprimeLinha();
  imprimeLinha();
  cout << "Fim";
  return 0;
}