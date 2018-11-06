// Progama hecho por: Angel Alexander Granados Flores GF18011
//progama para hacer numero de determinados numeros

#include <iostream>
#include <windows.h>

using namespace std;

void l();//declaracion de la funcion, no retorna ni recibe parametros
int sumar (int a, int aux);
int main(int argc, char** argv) {
	
	int n=1;//contador
	int suma=0;//acumular
	int aux;//intercambio de valores temporales
	int vn;//su valor cambiara de 2 a 4
	
	do{
	
	l();//llamada de la funcion
	cout<<"Cuantos numeros quiere sumar [2-4]: ";
	cin>>n;
	
	}while (n<2 && n>4);
	
	while (n<=vn){
		
		cout<<"Ingrese el numero"<<n<<endl;
		cin>>aux;
		
		suma=sumar(suma, aux);
		
		n++;
	}
	
	l();
	cout<<"El resultado de la suma esigual a: "<<suma<<endl;
	system("pause");
	
	l();
	cout<<"Desarollado por @xyz"<<endl;
	cout<<"UNIVERSIDAD DE EL SALVADOR"<<endl;
	
	system("pause");
	
}

void l(){
	system("cls");

}

int sumar (int a, int aux){
	
	return a+aux;
}

