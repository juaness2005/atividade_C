#include <iostream>

using namespace std;

int main()
{
    int num;
    
    while(true){
        cout << "Digite um número: ";
        cin >> num;
        
        
        for(int i=1; i<=10; i++){
            
         if(i%4==0){
            continue;
         }
         cout << i << " ";
        }
        
        cout << endl;
        
    }
    
    cout << "O laço foi encerrado!";

    return 0;
}