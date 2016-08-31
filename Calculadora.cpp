#include <iostream>
using namespace std;

int sumar_recursiva(int a, int b)
{
    if(b==0) return a;
    if(b > 0) return 1 + sumar(a,b-1);
    return -1 + sumar(a,b+1);
}

int sumar()
{
    cout<<"Ingrese los valores:"<<endl;
    cin>>a>>b;
    return sumar_recursiva(a,b);
}

int main(){

    int caso;

    do{

        cout<<endl;
	cout<<"1: Sumar"<<endl;
        cout<<"0: Salir"<<endl;
	
        cout<<"Seleccione un caso"<<endl;
        cin>>caso;
        //if(caso==0){breack;}
	if(caso==1) cout<<"La suma es: "<<sumar()<<endl;


    }while(caso!=0);

    cout<<endl;
    cout<<"Operacion terminada :)"<<endl;
    return 0;
}
