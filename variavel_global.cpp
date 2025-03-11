#include <iostream>
#include <iomanip>
using namespace std;

float pi = 3.14159;

float perimetro(float raio)
{
    return 2*pi*raio;    
}

float area (float raio)
{
    return pi*raio*raio;
}

int main()
{
    float raio;
    int casas;
    
    cout << "Digite o raio do circulo: ";
    cin >> raio;
    
    cout << "Digite quantas casas decimais deseja: ";
    cin >> casas;
    
    cout << fixed << setprecision(casas);
    
    cout << "Perímetro: " << perimetro(raio) << endl;
    cout << "Área: " << area(raio) << endl;
    
    return 0;
}



