#include <iostream>

using namespace std;

int main (){
    
    float lado1, lado2, lado3;
    
    cout << "Digite o valor do lado esquerdo do seu triângulo: " << endl;
    cin >> lado1;
    
    cout << "Digite o valor do lado direito do seu triângulo: " << endl;
    cin >> lado2;
    
    cout << "Digite o valor da base do seu triângulo: " << endl;
    cin >> lado3;
    
    if (lado1 == lado2 && lado2 == lado3){
        cout << "O seu triângulo é Equilátero";
    }
    
    else if (lado1 == lado2 || lado2 == lado3 || lado3 == lado1){
        cout << "O seu triângulo é Isósceles";
    }
    
    else if (lado1 != lado2 && lado2 != lado3){
        cout << "O seu triâmgulo é Escaleno";
    }
    
    
    
   
 
    
  return 0;
}