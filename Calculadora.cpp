#include <iostream>
using namespace std;

///Esta exponenciacion es la mas simple con numeros cortos,
///la funcion no es complicada es la mas basica.
int Exponenciacion(int base, int potencia){
    int respuesta=1;
    for (int i=1 ; i<=potencia; i++)
    {
        respuesta=respuesta*base;
    }
    return respuesta;
}

int main(){

    int caso;

    do{

        cout<<endl;
        cout<<"7: Exponenciacion"<<endl;

        cout<<"0: Salir"<<endl;

        cout<<"Selecione un caso"<<endl;
        cin>>caso;
        if(caso==7)
        {
            int base, potencia;
            cout << "  Ingresar la base ";cin >> base;
            cout << "  Ingresar la potencia ";cin >> potencia;
            cout << " El resultado es: " <<Exponenciacion(base,potencia)<<endl;
        }


    }while(caso!=0);

    cout<<endl;
    cout<<"Operacion terminada :)"<<endl;
    return 0;
}
