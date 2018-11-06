/* Este codigo fue realizado para calcular la produccion diaria de insumos
   para la elboracion de bebida*/
//Hecho por: Angel Alexander Granados Flores, GF18011

#include <iostream>//ingreso y salida de datos
#include <windows.h>//efectos de consola
#include <iomanip>//precision de decimales


using namespace std;

int cl(int clear);//verificar que el dato ingresado sea correcto
void l();//limpiar pantalla

int main(int argc, char** argv) {//funcion principal
	
	int sd;//ingreso de soda producida
	int jg;//ingreso de jugo producido
	int pd;//seleccion de producto a calcular
	int Tagua;//total de agua usada
	int Tazucar;//total de zucar usada
	int C = 1;//repetir proceso despues de una operacion
	

	while(C=1){//si el valor es 1 se repetira infinitamente
		do{// verificar si el usario despues de realizar la operacion quiere volver a repetirla
		
		do{//verifica que no haya ningun error
			cout<<"ingrese el producto a calcular (1=Soda, 2=jugo)"<<endl;
			//da a elegir al usuario que decea hacer
			cin>>pd;
			cl(pd);
		}while(pd<1 || pd>2);
		
		//divide el paso en 2 dependiendo lo que elija el usuario
		switch(pd){
			
			//si selleciona soda
			case 1:
				do{//verifica que no haya ningun error
					cout<<"ingrese la produccion diaria de soda: ";
					cin>>sd;
					cl(sd);
				}while(sd<1);
				
				Tagua=500*sd;//calcula cuanto se usara de agua
				Tazucar=800*sd;//calcula cuanto se usara de azucar
				
				//muestrar en pantalla los resultados
				cout<<"El total de produccion de soda es de: "<<sd<<" Unidades"<<endl;
				cout <<"El total de agua usada sera: "<<Tagua<<" ml"<<endl;
	            cout <<"El total de azucar usada sera: "<<Tazucar<<" gm"<<endl;
				system("pause");
				l();
				break;//sale del switch
				
			//si selleciono jugo
			case 2:
				
				do{//verifica que no haya ningun error
					cout<<"Ingrese la produccion diaria de jugo: ";
					cin>>jg;
					cl(jg);
				}while(jg<1);
				
				Tagua=600*jg;//calcula cuanto se usara de agua
	            Tazucar=700*jg;//calcula cuanto se usara de azucar
	            
	            //muestrar en pantalla los resultados
	            cout<<"El total de produccion de jugo es de: "<<jg<<" Unidades"<<endl;
	            cout <<"El total de agua usada sera: "<<Tagua<<" ml"<<endl;
	            cout <<"El total de azucar usada sera: "<<Tazucar<<" gm"<<endl;
	            system("pause");
	            l();
				
		}
	

	 
	 do{//verifica que no haya ningun error
	 
	    //pregunta al usuario si decea repetir el proceso
	 	 cout <<"Desea repetir el proceso? (1=si, 2=no) "<<endl;
	 	 cin>>C;
	 	 cl(C);
	 }while(C<1 || C>2);
	 
//funcion para calcular que decidio el usuario
}while(C<2 && C>0);
	 
	 //el usario termino su proceso y se imprime despedida
	 if (C == 2){
	 	 cout <<"Gracias por preferirnos, feliz dia"<<endl;
	 	
	 }
	 
	return 0;
}
} 

void l(){
	system("cls");
}

int cl(int clear){
	
	if (cin.fail() || clear<=0 ){
		cin.clear();//limpia la variable
		cin.ignore();
		cout<<"Ingrese un numero valido."<<endl;
		system("pause");
	}
  l();
  return clear;
}
