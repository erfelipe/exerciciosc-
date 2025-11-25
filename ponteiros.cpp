#include <iostream>

using namespace std;

int main() {
  int num1, num2;
  int* ptr1, ptr2;

  num1 = 10;
  num2 = 20;

  ptr1 = &num1;

  cout << "Conteúdo da variável: " << num1 << endl;
  cout << "Endereço da variável: " << &num1 << endl;
  cout << "Conteúdo do ponteiro: " << ptr1 << endl;
  cout << "Conteúdo de onde o ponteiro aponta: " << *ptr1 << endl;

  return 0;
}