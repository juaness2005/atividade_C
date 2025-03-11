#include <iostream>

using namespace std;

int main (){
    
    int salario=3000, salarioDigitado, valor;
    
    cout << "Digite o seu salario: ";
    cin >> salarioDigitado;
    
    
    if(salarioDigitado >= salario){
        
        valor = (20 * salarioDigitado) / 100;
        
        cout << "O imposto pago é: " << valor << endl;
        cout << "O seu salario é: " << salarioDigitado - valor;
    }
    else{
        valor = (15 * salarioDigitado) / 100;
        
        cout << "O imposto pago é: " << valor << endl;
        cout << "O seu salario é: " << salarioDigitado - valor;
    }
    
    return 0;
}