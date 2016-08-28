#include <iostream>
using namespace std;


//operacion x(int a, int b)
//{ colocar los "cin>>" requeridos  }
void sustraccion()
{
    int a,b;
    cout<<"ingrese los valores"<<endl;
    cin>>a;
    cin>>b;
    cout<<"resp: "<<a-b<<endl;
}

int main(){

    int caso;

    do{

        cout<<endl;
        //cout<<"1: operacion x"<<endl;
        cout<<"2: Sustraccion"<<endl;
        cout<<"0: Salir"<<endl;

        cout<<"Selecione un caso"<<endl;
        cout<<"------------------"<<endl;
        cin>>caso;
        //if(caso==0){breack;}
        if(caso==2){sustraccion();}





    }while(caso!=0);

    cout<<endl;
    cout<<"Operacion terminada :)"<<endl;
    return 0;
}
