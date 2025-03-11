#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int num1, num2, aux=0;
    
    cout << "Digite um número para iniciar a contagem: ";
    cin >> num1;
    
    cout << "Digite um número para encerrar a contagem: ";
    cin >> num2;
    
    for(aux=num1 ; aux <= num2 ; num1++){
            cout << setw(4) <<aux;
            aux++;
    }
    
    return 0;
}