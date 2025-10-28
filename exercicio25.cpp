#include <iostream> 
using namespace std; 

int main() {
//ler o problema e descobrir as primeiras variaveis
  float valorPeca1 = 0;
  float quantPeca1 = 0;
  float valorPeca2 = 0;
  float quantPeca2 = 0 ;
  float frete = 0;
  float valorTotal = 0;
//solicitar ao usuario os dados necessarios
 cout << "Digite o valor da peca1: " ;
 cin >> valorPeca1;
 cout << "Digite a quant de peca1: " ;
 cin >> quantPeca1;
 cout << "Digite o valor da peca2: " ;
 cin >> valorPeca2;
 cout << "Digite a quant de peca2: " ;
 cin >> quantPeca2;
 cout << "Digite o valor do frete: ";
 cin >> frete;
//realizar o calculo desejado 
  valorTotal = (valorPeca1 * quantPeca1) + 
               (valorPeca2 * quantPeca2) + 
               frete; 
//feito o calculo mostrar a resposta no monitor
  cout << "O valor total da compra eh: " << valorTotal << endl;
  return 0;
}