#include <iostream>

using namespace std;

int main (){
    
  int idade;
  
  cout << "Digite a sua idade: ";
  cin >> idade;
  
  if (idade >= 18 && idade <= 65) {
      cout << "voto obrigatório!";
  }
  
  else if (idade>=16){
      cout << "Voto facultativo!";
  }
  
  else {
      cout << "Você não tem idade para votar";
  }
  
    
  return 0;
}