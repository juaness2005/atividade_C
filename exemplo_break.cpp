#include <iostream>

using namespace std;

int main()
{
    int num;
    
    while(true){
        cout << "Digite um número: ";
        cin >> num;
        
        if(num==0){
            break;
        }
        
        cout << num*num<<endl;
        
    }
    
    cout << "O laço foi encerrado!";

    return 0;
}