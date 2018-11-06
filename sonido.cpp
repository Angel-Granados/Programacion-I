/*Este programa esta realizado para calcular 
el salario de los empleados segun sus ventas*/
//Creado por: Angel Alexander Granados Flores
//Carnet: GF18011
//Fecha: 10 de septiembre de 2018

//librerias requeridas
#include <iostream>
#include <windows.h>
#include <cstdlib>


using namespace std;

int main (){

// declaracion de variables
    float V;
    int S;
  
    //Introduccion de color de fondo y letras
    system ("color B9");
    
    //Texto de entrada
    
    cout << "Programa para calcular el salario de los empleados "<<endl;
    
    //entrada de el dato de ventas
	 
  do {
 
    cout << "Ingrese las ventas: "<<endl;
    cin >> V;
   } 
   while (V<=0);
    
    /*i el salario es mayor o igual a cero y menor o igual a quinientos mil 
    su salario sera de $80.000*/
    
    if (V >0 && V <= 500000 ) {
         S = 80.000;
         cout << "El Salario del empleado es: $" << S << endl;Beep(500,1000);
     }
     
     /* Si el if anterior no es ccorrecto con el dato entonces preguntar
     si las ventas son igual o mayor a 500001 y menor o igual a 1000000
     el salario sera de $160.000*/
     
	 else if (V >=500001 && V <= 1000000 ) {
	 	 S = 160.000;
	     cout << "El Salario del empleado es: $" << S << endl;Beep(500,1000);
	 }    
	 
	  /* Si el if anterior no es ccorrecto con el dato entonces preguntar
     si las ventas son igual o mayor a 1000001 y menor o igual a 1500000
     el salario sera de $320.000*/
     
	 else if (V >=1000001 && V <= 1500000 ) {
	 	 S = 320.000;
	     cout << "El Salario del empleado es: $" << S << endl;Beep(500,1000);
        }
        
        /* Si el if anterior no es ccorrecto con el dato entonces preguntar
     si las ventas son igual o mayor a 1500001  y menor o igual a 2500000
     el salario sera de $450.000*/
     
        else if (V >=1500001 && V <= 2500000 ) {
	 	 S = 450.000;
	     cout << "El Salario del empleado es: $" << S << endl;Beep(500,1000);
        }
        
        /* Si el if anterior no es ccorrecto con el dato entonces preguntar
     si las ventas son igual o mayor a 2500001 y menor o igual a 4000000
     el salario sera de $550.000*/
     
        else if (V >=2500001 && V <= 4000000 ) {
	 	 S = 550.000;
	     cout << "El Salario del empleado es: $" << S << endl;Beep(500,500);Beep(1000,500);
        }
        
        /* Si el if anterior no es ccorrecto con el dato entonces preguntar
     si las ventas son igual o mayor a 4000001 el sueldo del empleado sera el
     20% de las ventas*/
     
        else if (V >= 4000001 ) {
        	S =V * 0.20;	 
	        cout << "El Salario del empleado es: $" << S << endl;Beep(500,1000);
        }
        
      
	return 0;
}
