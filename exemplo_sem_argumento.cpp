#include <iostream>
using namespace std;

float quadrado ()
{
    float var;
    
    cout << "Digite um número para ser elevado ao quadrado: ";
    cin >> var;
    
    return var*var;   
}

int main()
{
    float resultado;
    
    resultado = quadrado();
    cout << " Quadrado do número:  " << resultado;
    return 0;
}