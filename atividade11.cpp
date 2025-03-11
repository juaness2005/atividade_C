#include <iostream>
using namespace std;

int main (){
    float nota1, nota2, nota3, nota4, nota5, media;
    
    cout << "Digite a sua nota de matemática: ";
    cin >> nota1;
    
    cout << "Digite a sua nota de física: ";
    cin >> nota2;
    
    cout << "Digite a sua nota de química: ";
    cin >> nota3;
    
    cout << "Digite a sua nota de inglês: ";
    cin >> nota4;
    
    cout << "Digite sua nota de português: ";
    cin >> nota5;
    
    media = ((nota1*3)+(nota2*2.5)+(nota3*2.5)+(nota4*1.0)+(nota5*1.0)) / (3 + 2.5 + 2.5 + 1.0 + 1.0);
    
    cout << "A média á : " <<media << endl;
  
    return 0;
    
} 