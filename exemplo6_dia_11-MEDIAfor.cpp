#include <iostream>

using namespace std;

int main (){
    
    int aux, num_materiais;
    float nota, soma=0;
    
    cout << "Digite a quantidade de matérias: ";
    cin >> num_materiais;
    
    for(aux=1; aux <= num_materiais; aux++){
        cout << "Nota " << aux << ": ";
        cin >> nota;
        soma += nota;
    }
    
    cout << "Média: " << soma / num_materiais << endl;
    
  return 0;
  
}