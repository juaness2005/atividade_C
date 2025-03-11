#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int aux=0;
    float nota, soma=0;
    
    while(true){
        cout << "Digite uma nota: ";
        cin >> nota;
        
        if(nota>10){
            cout << "Notas acima de 10 são inválidas" << endl;
            continue;
        }
        
        if (nota<0){
            cout << "Nota negativa, encerrando cálculos e exibindo a média: ";
            break;
        }
        
        soma += nota;
        aux++;
    }
    
    cout << soma/aux << endl;
    
    return 0;
}