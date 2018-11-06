//Juego de X0
//Hecho por: Angel Alexander Granados Flores, GF18011

//librerias requeridas
#include <iostream>
#include <cstdlib>
using namespace std;

bool turnoDeX = false;

//declar y dar valor a la matriz
char tablero[][3] = { {'_','_','_'},
					 {'_','_','_'},
					 {'_','_','_'}
};


char hayGanador(){
	//Validacion horizontal
	for(int i = 0 ; i < 3 ; i++){
		if(tablero[i][0] != '_' && tablero[i][0] == tablero[i][1] && tablero[i][1] == tablero[i][2] ){
			return tablero[i][0];

		}
	}
	//Validacion vertical
	for(int i = 0 ; i < 3 ; i++){
		if(tablero[0][i] != '_' && tablero[0][i] == tablero[1][i] && tablero[1][i] == tablero[2][i] ){
			return tablero[0][i];

		}
	}

	//Validacion Diagonal de izquierda a derecha
	if(tablero[0][0] != '_' && tablero[0][0] == tablero[1][1] && tablero[1][1] == tablero[2][2] ){
		return tablero[0][0];

	}

	//Validacion Diagonal de Derecha a Izquierda
	if(tablero[0][2] != '_' && tablero[0][2] == tablero[1][1] && tablero[1][1] == tablero[2][0] ){
		return tablero[0][2];
	}
}

//verificar si hay empate
bool hayEmpate(){
	for(int i = 0 ; i < 3 ; i++){
		for(int j = 0 ; j < 3 ; j++){
			if(tablero[i][j] == '_'){
				return false;
			}
		}
	}
	return true;
}


//mostra tablero en pantalla
void mostrarTablero(){
	char jugador = turnoDeX ? 'X' : 'O';
	int fila = 0;
	int columna = 0;
	for(int i = 0 ; i < 3 ; i++){
		for(int j = 0 ; j < 3 ; j++){
			cout << tablero[i][j] << "\t";
		}
		cout << endl;
	}
	
	//preguntar a usario donde quiere colocar su x ó 0
	cout << "Es el turno de " << jugador << endl;
	cout << "En que fila desea jugar: ";
	cin >> fila;
	cout << "En que columna desea jugar: ";
	cin >> columna;
	tablero[fila][columna] = jugador;
	char ganador  = hayGanador();
	
	//validar el ganador
	if( ganador != '_'){
		cout << " Ha ganado " << ganador << endl;
		exit(0);
	}
	
	//validar si hay un empate
	if(hayEmpate()){
		cout << " Hay un empate" << endl;
		exit(0);
	}
	turnoDeX = !turnoDeX;

}

int main(int argc, char **argv) {
	while(true){
		mostrarTablero();
	}
}

