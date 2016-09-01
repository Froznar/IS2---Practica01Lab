#include <iostream>
#include <math.h>  
using namespace std;

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
        //cout<<"1: operacion x"<<endl;
        cout<<"5: Logaritmo Natural"<<endl;
        cout<<"0: Salir"<<endl;

        cout<<"Selecione un caso"<<endl;
        cin>>caso;
        //if(caso==0){breack;}
        if(caso==5)
        {
            logNatural();
        }
             
