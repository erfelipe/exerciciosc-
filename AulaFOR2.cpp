#include <iostream>
#include <random> 
#include <ctime>
using namespace std;
int main()
{
  srand(time(0));
 
  for(int i=0; i < 10; i++) {
    int aleatorio = rand();  
    cout << aleatorio << endl;
  }
  
  int y = 0;
  while (y < 6) {
    int aleatorio = rand();  
    cout << aleatorio <<  " while " << endl;
    y++;
  }

  int z=0; 
  do {
    int aleatorio = rand() % 200;  
    cout << aleatorio <<  " do while " << endl;
    z++;
  } while(z < 6);

  return 0;
}