#include <iostream>

using namespace std;

int main()
{

    int Menu;
    cout << "Porfavor ingrese el color que desee" << endl;
    cout << "[1]Rojo" << endl;
    cout << "[2]Verde" << endl;
    cout << "[3]Azul" << endl;
    cin>>Menu;
    switch (Menu)
    {
    case 1 :
          cout << "El color rojo signifca enojo" << endl;
        break;
            case 2:
  cout << "El color verde significa envidia" << endl;
        break;
            case 3:
  cout << "EL color azul significa tristeza" << endl;
        break;
    
    default:
        break;
    }
    return 0;
}