#include <iostream>

using namespace std;

int main (){
    
   int idade, doenca;
   
   cout << "Digite a sua idade: ";
   cin >> idade;
   
   
   
   if(idade >= 18){
       
        cout << "Você tem alguma restrição para doar sangue? " << endl;
   
        cout << "1. Não" << endl;
        cout << "2. Sim" << endl;
        cin >> doenca;
       
       if(doenca == 1){
           cout << "Você pode doar sangue!";
       }
       else{
           cout << "Você não pode doar sangue, pois possui restrições!";
       }
   }
   else {
       cout << "Você precisa ter 18 anos ou mais, para fazer doação de sangue!";
   }
    
    return 0;
}