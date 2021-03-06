#include <iostream>
#include <math.h>
using namespace std;

///**********************************************
///****************CALCULADORA*******************
///**********************************************
//operacion x(int a, int b)
//{coloca  los "cin>>" requeridos}

///Esta exponenciacion es la mas simple con numeros cortos,
///la funcion no es complicada es la mas basica.
void Exponenciacion(){
  int base,potencia;
  cout<<"Ingrese el valor de la base:"<<endl;
  cin>>base;
  cout<<"Ingrese el valor de la potencia"<<endl;
  cin>>potencia;
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

///**********************************************
///*********OPERACIONES*TRIGONOMETRICAS**********
///**********************************************

float Hipotenusa(float x, float y)
{
  return sqrt(x*x+y*y);
}

float Tangente(float x, float y)
{
  return (x/y);//hablamos la tangente de "a"
}

float Cosecante(float x,float y)
{
  return Hipotenusa(x,y)/x;
}

float GradosToRadianes(float a){
  return a / 180 * 3.14159265;
}

float Cotangente(float x, float y)
{
  return float(y/Hipotenusa(x,y));
}

float Coseno(int Copuesto,int Cadyacente)
{
  float Cos;
  //Cambios
  float Hipot=Hipotenusa(Copuesto, Cadyacente);
  Cos=float(Cadyacente/Hipot);
  return Cos;
}

float Secante(float x, float y)
{
  float res=Hipotenusa(x,y)/y;
  return res;
}

float Seno(float x,float y){
  return x/Hipotenusa(x,y);
}


int main(){
  int menu;
  int caso;
  int operacion;

  do{
    cout<<endl;
    cout<<"*************MENU*************"<<endl;
    cout<<"1: Calculadora"<<endl;
    cout<<"2: Operaciones Trigonometricas"<<endl;
    cout<<"0: Salir"<<endl;
    cout<<"*****************************"<<endl;
    cout<<"Selecione una aplicacion"<<endl;
    cout<<"*****************************"<<endl;
    cin>>menu;
    if(menu==1)
      {
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
      }
    if(menu==2)
      {
	do{
	  float a,X,Y;
	  cout<<"-----OPERACIONES-TRIGONOMETRICAS-----"<<endl;
	  cout<<" "<<endl;
	  cout<<" | *                                    "<<endl;
	  cout<<" | * *            a -> angulo  °        "<<endl;
	  cout<<" X *   *          X -> cateto opuesto   "<<endl;
	  cout<<" | *    a*        Y -> cateto adyacente "<<endl;
	  cout<<" | * * * * *                            "<<endl;
	  cout<<"   ----Y----                            "<<endl;
	  cout<<endl;
	  cout<<"NOTA: El ingreso de valores erroneos corre por cuenta del usuario"<<endl;
	  cout<<"Ingrese el valor de a:  ";
	  cin>>a;
	  cout<<"Ingrese el valor de X:  ";
	  cin>>X;
	  cout<<"Ingrese el valor de Y:  ";
	  cin>>Y;
	  cout<<"-------Opciones-------"<<endl;
	  cout<<endl;
	  cout<<"1: Saber la hipotenusa"<<endl;
	  cout<<"2: Sen(a)"<<endl; //Ejemplo de definicion en el menu
	  cout<<"3: Cos(a)"<<endl;
	  cout<<"4: Tan(a)"<<endl; //tangente de "a"
	  cout<<"5: Cot(a)"<<endl;
	  cout<<"6: Sec(a)"<<endl;
	  cout<<"7: Cosec(a)"<<endl;
	  cout << "8: Convertir grados a radianes" << endl;
	  cout<<"0: Salir"<<endl;
	  cout<<"-----------------------------"<<endl;
	  cout<<"Que desea hacer?"<<endl;
	  cout<<"-----------------------------"<<endl;
	  cout<<endl;
	  cin>>operacion;

	  if(operacion==1)
	    {
	      cout<<" La respuesta es: "<<Hipotenusa(X,Y) << endl;
	    }
	  if(operacion==3)
	    {
	      cout<<" El Coseno es : "<< Coseno(X,Y)<<endl;
	    }
	  if(operacion==4){
	    cout<<" La respuesta es:"<<Tangente(X,Y);
	  }
	  if(operacion==5)
	    {
	      cout<<" La respuesta es: "<<Cotangente(X,Y)<<endl;
	    }

	  if(operacion==7)
	    {
	      cout<<"El Cosecante es: "<<Cosecante(X,Y)<<endl;
	    }

	  if(operacion==6)
	    {
	      cout<<" La respuesta es: "<<Secante(X,Y);
	    }
	  if(operacion == 8){
	    cout << "La respuesta es: " << GradosToRadianes(a);
	  }
	  if(operacion==2)
	  {
	      cout<<"La respuesta es: "<<Seno(X,Y)<<endl;
	  }

	  cout<<endl;

	}while(operacion!=0);
      }
  }while(menu!=0);
  cout<<endl;
  cout<<"Operacion terminada :)"<<endl;
  return 0;
}
