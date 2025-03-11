#include <iostream>
using namespace std;

float doub()
{
   float num, dobro;
   
    cout << "Digite um número: ";
    cin >> num;
    
    dobro = 2*num;
    
    return dobro;
    
}

int main()
{   
    float resultado;
    
    resultado = doub();
    
    cout << "dobro na função main: " << resultado;
    return 0;
}
