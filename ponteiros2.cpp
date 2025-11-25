#include <iostream>

using namespace std;

void soma1(int a, int b){
  a = a + 1;
  b = b + 2;
  cout << a + b << endl;
}

void soma2(int* a, int* b){
  *a = *a + 1;
  *b = *b + 2;
  cout << *a + *b << endl;
}

int main() {
  int num1, num2;
  int* ptr1;
  int* ptr2;

  num1 = 10;
  num2 = 20;

  ptr1 = &num1;
  ptr2 = &num2;

  cout << "Chama soma1: " ;
  soma1(num1 , num2);
  cout << "Valor de num1: " << num1 << endl;
  cout << "Valor de num2: " << num2 << endl;

  cout << "Chama soma2: " ;
  soma2(ptr1 , ptr2);
  cout << "Valor de num1: " << num1 << endl;
  cout << "Valor de num2: " << num2 << endl;

  return 0;
}