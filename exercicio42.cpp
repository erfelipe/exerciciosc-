#include <iostream>
using namespace std;
int main()
{
  //teremos 2 sequencias de 1 a 10 
  for( int i=1; i<=10; i++) {
    cout << "---------------" << endl;
    for ( int j=1; j<=10; j++) {
      cout << i << " * " << j << " = " << i * j << endl;
    }
  }

  return 0;
}