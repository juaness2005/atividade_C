#include <iostream>

using namespace std;

int main (){
    float raio, perimetro, area;
    
    cout << "Informe o raio: ";
    cin >>raio ;
    perimetro= 2*3.14*raio;
    area=3.14*(raio*raio);
    
    cout << "Perimetro do circulo: "<<perimetro<< endl;
    cout << "Área= "<< area;
    
    
}