#include <iostream>
using namespace std;

int main (){
    float salario, valor;
    
    cout << "Digite a salrio bruto: ";
    cin >> salario;
    
    valor = (27.5 * salario) / 100;
    
    cout << "O salário bruto é: " <<salario << endl;
    cout << "foi descontado 27,5%" << endl;
    cout << "O salário liquido é: " << valor << endl;
   
    
    return 0;
    
}

#include <iostream>

using namespace std;

int main (){
    
    float nota;
    
    cout << "Digite a sua nota: ";
    cin >> nota;
    
    nota >= 50 ? cout << "Aprovado: " : cout << "Reprovado" ;
    
    
    return 0;
}