#include <iostream>
using namespace std;

//Realizar un programa que solicite un numero cualquiera por ejemplo si el numero fuera 10 en pantalla debe mostrar un mensaje que diga restante:9 restante:8 restante:7 restante:6 restante:5 restante:4 restante:3 restante:2 restante:1
int main(int argc, char** argv) {
	
	//Variables
 int hasta, restante=0, numero=0;
 
  cout << "Ingrese el numero " << endl;
  cin >> hasta;
  
  for (int numero = 1 ; numero <= hasta ; numero++) 
  cout<<"El numero restante es"<<restante<<endl;
  
	
	
	return 0;
}
