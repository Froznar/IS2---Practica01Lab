#include <iostream>
using namespace std;

//operacion x(int a, int b)
//{ colocar los "cin>>" requeridos  }
void multiplicacion(){
    int a, b;
    cout << "Ingrese el primer factor: ";
    cin >> a;
    cout << "Ingrese el segundo factor: ";
    cin >> b;
    cout << "Respuesta: " << a * b << endl;
}

int main(){

    int caso;

    do{

        cout<<endl;
        //cout<<"1: operacion x"<<endl;
        cout << "3: Multiplicacion." << endl;

        cout<<"0: Salir"<<endl;

        cout<<"Selecione un caso"<<endl;
        cin>>caso;
        //if(caso==0){breack;}

        if(caso == 3)
            multiplicacion();






    }while(caso!=0);

    cout<<endl;
    cout<<"Operacion terminada :)"<<endl;
    return 0;
}
