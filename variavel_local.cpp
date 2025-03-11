#include <iostream>
using namespace std;



void imprime()
{   
    int varLocal=2;
    cout << varLocal;
}

int main()
{
    int varLocal=1;
    imprime();
    cout << "\n Dentro do main \n" << varLocal;
    return 0;
}



