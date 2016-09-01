#include <iostream>
#include <math.h>
using namespace std;
//
//operacion x(int a, int b)
//{coloca  los "cin>>" requeridos}

void sumar()
{
    cout<<"Ingrese los valores:"<<endl;
    cin>>a>>b;
    cout<<"La suma es: "<<a+b<<endl;
    return;
}


void multiplicacion(){
    int a, b;
    cout << "Ingrese el primer factor: ";
    cin >> a;
    cout << "Ingrese el segundo factor: ";
    cin >> b;
    cout << "Respuesta: " << a * b << endl;
}

void sustraccion()
{
    int a,b;
    cout<<"ingrese los valores"<<endl;
    cin>>a;
    cin>>b;
    cout<<" El Resultado es: "<<a-b<<endl;
}

void logNatural()
{
  int logN;  int result;
  cout<<" Ingrese el Numero  para hallar su Logaritmo Natural"<<endl;
  cin>>logN;
  result=log (logN);
  cout<<" El Resultado es: "<< result<<endl;
}

int main(){

    int caso;

    do{

        cout<<endl;
        cout<<"1: Adicion"<<endl;

        cout<<"2: Sustraccion"<<endl;

        cout << "3: Multiplicacion." << endl;

        cout<<"5: Logaritmo Natural"<<endl;

        cout<<"0: Salir"<<endl;

        cout<<"Selecione un caso"<<endl;
        cout<<"------------------"<<endl;
        cin>>caso;
        //if(caso==0){breack;}

	if(caso==1)
	{
	    sumar();
	}
        if(caso==2)
        {
            sustraccion();
        }

        if(caso == 3){
            multiplicacion();
        }

        if(caso==5)
        {
            logNatural();
        }



    }while(caso!=0);

    cout<<endl;
    cout<<"Operacion terminada :)"<<endl;
    return 0;
}




