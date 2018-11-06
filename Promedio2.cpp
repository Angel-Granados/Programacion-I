// Progama hecho por: Angel Alexander Granados Flores GF18011
//este codigo fue programado para calcular el promedio de 5 numeros

#include <iostream>
#include <math.h>
#include <windows.h>

using namespace std;

int main(int argc, char** argv) {
	
	float notas [5];
	float suma=0;
	float promedio;
	
	

     	for (int i=0; i<=4; i++)
     	do
	     {
	     	system("cls");
		     cout<<"Ingrerse la nota: "<<i+1<<endl;
		     cin>>notas[i];
		     suma=suma+notas[i];//acumular la sumatoria de notas
			} while (notas[i]<=0);
       
     //Salida de datos en pantallas
     system("cls");
    cout<<"Las notas ingresadas son: "<<endl;
    cout<<"Nota1: "<<notas[0]<<endl;
    cout<<"Nota2: "<<notas[1]<<endl;
    cout<<"Nota3: "<<notas[2]<<endl;
    cout<<"Nota4: "<<notas[3]<<endl;
    cout<<"Nota5: "<<notas[4]<<endl;
	promedio=suma/5;
	cout<<"El promedio es de: "<<promedio<<endl;
	system("pause");
	
	
	
	
	return 0;
}
