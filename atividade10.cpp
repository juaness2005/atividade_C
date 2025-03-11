#include <iostream>
using namespace std;

int main (){
    float nota1, nota2, nota3, nota4, nota5, media;
    
    cout << "Digite uma nota: ";
    cin >> nota1;
    
    cout << "Digite uma nota: ";
    cin >> nota2;
    
    cout << "Digite uma nota: ";
    cin >> nota3;
    
    cout << "Digite uma nota: ";
    cin >> nota4;
    
    cout << "Digite uma nota: ";
    cin >> nota5;
    
    media = (nota1+nota2+nota3+nota4+nota5) / 5;
    
    cout << "A média á : " <<media << endl;
  
    return 0;
    
} 