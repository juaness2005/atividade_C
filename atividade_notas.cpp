#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int aux=0;
    float nota, soma=0;
    
    while(true){
        cout << "Insira uma nota: ";
        cin >> nota;
        
        if(nota>10){
            cout << "Insira uma nota válida!" << endl;
            continue;
        }
        
        else if (nota<0){
            cout << "Insira uma nota válida!" << endl;
            continue;
        }
        
        else {
            cout << "Nota válida!";
            break;
        }
        
    }
    
    
    return 0;
}