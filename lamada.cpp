/* este codigo fue realizado para clacular el total a pagar por llamada
   segun el tiempo de cada una*/
//Hecho por: Angel Alexander Granados Flores, GF18011

#include <iostream>//ingreso de salida de datos 
#include <windows.h>//efecto de consola
#include <iomanip>//presicion de decimales

using namespace std;

int cl(int lin);//
void l();

int main(int argc, char** argv) {
	
	int Tllamadas;// total de llamadas
	int min;//tiempo de la llamada 
	float C;//costo de la llamada
	float Ta;//gasto total de llamadas
	
	do{//verifica que no haya algun error
	
	    //ingresar el total de llamadas
		cout<<"Ingrese el total de llamadas realizadas: "<<endl;
		cin>>Tllamadas;
		cl(Tllamadas);
		
		l();
	}while (Tllamadas < 1);
	
	//enlista el costo de la llamada
	float ll[Tllamadas] = {0};
	
	//pide ingresar la duracion de cada llamada
	for (int i=0; i<Tllamadas; i++){
		
		do{//verifica que no haya algun error
		
		 cout<<"Ingrese cuanto duro la llamada N "<<i+1<<":"<<endl;
		 cin>>min;
		 cl(min);
			
		}while(min<1); 
		
		//asigna el costo segun la duracion de la llamada
		if (min>=1 && min<=10){
			C=0.05;
		}
		else if (min>10 && min<= 15){
			C=0.08;
		}
		else{
			C=0.10;
		}
		
		//saca la suma de todos los costos y llamadas 
		Ta=Ta+C;
		
		//enlista cada costo en el arreglo llamadas
		ll[i]=C;
	
	}
	l();
	
	//imprime el costo de las llamadas
	for (int i=0; i<Tllamadas; i++){
	
	 cout<<"la llamada numero "<<i+1<<" es de: $"<<setprecision(3)<<ll[i]<<endl;
     }
     
     //imprime el total a pagar
     cout<<"el total a pagar sera de: $"<<setprecision(3)<<Ta<<endl;
	 
}

void l(){
	system("cls");
}

int cl(int clear){
	
	if (cin.fail() || clear<=0){
		cin.clear();//limpia la variable
		cin.ignore();//borra espacios y caracteres
		cout<<"Ingrese numero valido."<<endl;
		system("pause");
	}
l();
return clear;
}
