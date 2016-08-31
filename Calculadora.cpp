#include <iostream>
using namespace std;

int sumar(int a, int b)
{
    if(b==0) return a;
    if(b > 0) return 1 + sumar(a,b-1);
    return -1 + sumar(a,b+1);
}

int main(){

    int caso,a,b;

    do{

        cout<<endl;
        cout<<"0: Salir"<<endl;
	cuut<<"1: Operacion Sumar"<<endl
	
        cout<<"Selecione un caso"<<endl;
        cin>>caso;
        //if(caso==0){breack;}
	if(caso==1)
	{
	    cout<<"Ingrese dos numeros:"<<endl;
	    cin>>a>>b;
	    cout<<sumar(a,b)<<endl;
	}


    }while(caso!=0);

    cout<<endl;
    cout<<"Operacion terminada :)"<<endl;
    return 0;
}
