#include <iostream>

using namespace std;

int main(){
    int A1, A2;
    cout<<"Porfavor ingrese dos numeros"<<endl;
    cin>>A1;
    cin>>A2;

    if (A1>A2)
    {
            cout<<"Su valor mas grande es: "<< A1 <<endl;
    }
    else if (A2>A1)
    {
            cout<<"Su valor mas grande es: "<< A2 <<endl;
    }
    else
    {
        cout<<"Usted ingreso valores iguales"<<endl;
    }
    
    return 0;
    
}