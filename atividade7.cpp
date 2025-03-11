#include <iostream>
using namespace std;

int main (){
    float valor, numero, porcentagem;
    
    cout << "Digite a porcentagem: ";
    cin >> porcentagem;
    
    cout << "Digite o numero: ";
    cin >> numero;
    
    valor = (porcentagem * numero) / 100;
    
    cout << porcentagem << "% do numero escolhido é: " <<valor << endl;
   
    
    return 0;
    
}