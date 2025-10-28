#include <iostream>
using namespace std;
int main()
{
  for(int cont=0; cont <= 10; cont++  ){
    cout << "valor do contador: " << cont <<endl;
    cout << "------------" << endl;
  }
  
  int idade = 0;
  cout << "Digite sua idade: ";
  cin >> idade;

  for (int i=0; i <= idade ; i++) {
    cout << "Uma frase para cada idade: " << i << endl;
  }

  for (int i=idade; i >= 16; i--) {
    cout << "A idade " << i << " pode tirar o titulo" << endl;
  }
  
  int contador = 0; 
  while (contador < idade) //se for FALSO nao entra no loop
  {
    cout << "Uma frase repetida: " << contador << endl;
    contador++; //alteracao do CONTADOR 
  }
  
  do {
    cout << "Uma frase do DO WHILE" << contador << endl;
    contador ++;
  } while (contador < idade) ; 
  

  return 0;
}