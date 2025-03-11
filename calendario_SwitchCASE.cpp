#include <iostream>

using namespace std;

int main (){
    
    int mes;
   
    cout << "1. Janeiro \n";
    cout << "2. Fevereiro \n";
    cout << "3. Março \n";
    cout << "4. Abril \n";
    cout << "5. Maio \n";
    cout << "6. Junho \n";
    cout << "7. Julho \n";
    cout << "8. Agosto \n";
    cout << "9. Setembro \n";
    cout << "10. Outubro \n";
    cout << "11. Novembro \n";
    cout << "12. Dezembro \n";
    cout << "Digite o número do mês escolhido. \n";
    cin >> mes;
    
    switch(mes){
      case 1: 
        cout << "Janeiro tem 31 dias" << endl;
        break;
      case 2: 
        cout << "Fevereiro tem 28 dias" << endl;
        break;
     case 3: 
            cout << "Março tem 31 dias" << endl;
        break;
     case 4: 
        cout << "Abril tem 30 dias" << endl;
        break;
        case 5: 
        cout << "Maio tem 31 dias" << endl;
        break;
        case 6: 
        cout << "Junho tem 30 dias" << endl;
        break;
        case 7: 
        cout << "Julho tem 31 dias" << endl;
        break;
        case 8: 
        cout << "Agosto tem 31 dias" << endl;
        break;
        case 9: 
        cout << "Setembro tem 30 dias" << endl;
        break;
        case 10: 
        cout << "Outubro tem 31 dias" << endl;
        break;
        case 11: 
        cout << "Novembro tem 30 dias" << endl;
        break;
        case 12: 
        cout << "Dezembro tem 31 dias" << endl;
        break;
     default:
        cout << "Esse mês não existe \n";
       break;
  }
    
    
  return 0;
}