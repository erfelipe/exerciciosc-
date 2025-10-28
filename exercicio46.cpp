#include <iostream>
using namespace std;
int main()
{
  int somatorio = 0;
  for (int i=1; i<=200; i++) {
    if (i % 2 == 0) {
      somatorio = somatorio + i;
    }
  }
  cout << "A soma dos... " << somatorio;

  return 0;
}