#include <iostream>
using namespace std;

int main (){
    float graus, farenheit;
    
    cout << "Digite o graus Celsius: ";
    cin >> graus;
    
    farenheit = graus * 1.8 + 32;
    
    cout << "Total em minutos: " <<farenheit << endl;
   
    
    return 0;
    
}