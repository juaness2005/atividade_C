#include <iostream>

using namespace std;

int main (){
    
  float nota;
  
  cout << "Digite sua nota (0 a 100): ";
  cin >> nota;
  
  if (nota >= 90){
      cout << "Nota A" << endl;
    }
    
    else if (nota >= 80){
        cout << "Nota B" << endl;
    }
    
     else if (nota >= 70){
        cout << "Nota C" << endl;
    }
    
     else if (nota >= 60){
        cout << "Nota D" << endl;
    }
    
    else {
        cout << "REPROVADO!";
    }
    
    return 0;
}