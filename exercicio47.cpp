#include <iostream>
using namespace std;
int main()
{
  int num, fatorial=1;
  cout << "Digite um núm: ";
  cin >> num;
  for (int i = 1; i <= num; i++){
    fatorial = fatorial * i;
  }
  cout << "o fat de " << num << " eh " << fatorial << endl;
  return 0;
}