#include <iostream>
using namespace std;

float quadrado (float num)
{
    return num*num;   
}

int main()
{
    float var;
    
    cout << "Digite um número para ser elevado ao quadrado: ";
    cin >> var;
    
    cout << var << " x " << var << " = " << quadrado(var) << endl;
    
    return 0;
}
