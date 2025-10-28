#include <iostream>
using namespace std;
int main()
{
  for (int i=0; i <= 200; i++) {
    if ( i % 2 != 0 ) {
      cout << "O numero: " << i << " eh impar" << endl;
    }
  }
  //outra solucao 
  for (int j=1; j <= 200; j = j+2){
    cout << j << endl;
  }
  return 0;
}