#include <iostream>
#include <math.h>
using namespace std;

//operacion x(int a, int b)
//{coloca  los "cin>>" requeridos}

///Esta exponenciacion es la mas simple con numeros cortos,
///la funcion no es complicada es la mas basica.
void Exponenciacion(){
    int base,potencia;
    cin>>base>>potencia;
    int respuesta=1;
    for (int i=1 ; i<=potencia; i++)
    {
        respuesta=respuesta*base;
    }
    cout<<"El resultado es: "<<respuesta<<endl;
    return;
}

void sumar()
{
  int a,b;
  cout<<"Ingrese los valores:"<<endl;
  cin>>a>>b;
  cout<<"La suma es: "<<a+b<<endl;
  return;
}

void logBase10(){
  double a,b;
  cout<<"Ingrese el valor "<<endl;
  cin>>a;
  b=log10(a);
  cout<<a<<" en logaritmo base 10 es "<<b<<endl;
}

void multiplicacion(){
  int a, b;
  cout << "Ingrese el primer factor: ";
  cin >> a;
  cout << "Ingrese el segundo factor: ";
  cin >> b;
  cout << "Respuesta: " << a * b << endl;
}

void dividir(){
  float a,b;
  cout << "Ingrese dividendo: ";
  cin >> a;
  cout << "Ingrese divisor: ";
  cin >> b;
  cout << "El Resultado es: " << a / b << endl;
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
  double logN;  double result;
  cout<<" Ingrese el Numero  para hallar su Logaritmo Natural"<<endl;
  cin>>logN;
  result=log (logN);
  cout<<" El Resultado es: "<< result<<endl;
}

void cuadrada()
{
	double base;
	float resultado;
	cout<<"Ingrese la base:"<<endl;
	cin>>base;
	cout<<"El resultado es "<<pow(base,0.5);	
}

int main(){
  int caso;

  do{

    cout<<endl;
    cout<<"---------CALCULADORA---------"<<endl;
    cout<<"1: Adicion"<<endl;

    cout<<"2: Sustraccion"<<endl;

    cout<<"3: Multiplicacion." << endl;
    
    cout<<"4: Division. "<<endl;
    
    cout<<"5: Logaritmo Natural"<<endl;
    
    cout<<"6: Logaritmo Base 10"<<endl;
    
    cout<<"7: Exponenciacion" <<endl;
    
    cout<<"8: Raiz Cuadrada"<<endl;

    cout<<"0: Salir"<<endl;

    cout<<"-----------------------------"<<endl;
    cout<<"Selecione un caso"<<endl;
    cout<<"-----------------------------"<<endl;
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

    if(caso == 4){
      dividir();
    }

    if(caso==5)
      {
	logNatural();
      }
    
    if(caso==6){
      logBase10();
    }
    if(caso==7){
    	Exponenciacion();
    }
    if(caso==8){
	cuadrada();
    }

  }while(caso!=0);

  cout<<endl;
  cout<<"Operacion terminada :)"<<endl;
  return 0;
}
