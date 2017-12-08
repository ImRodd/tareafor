#include <iostream>
using namespace std;
//Un programa que busque los numeros pares entre 1 y 100
int main(int argc, char** argv) {
	
	int numero=0;
	
	cout<<"Ingrese un numero"<<endl;
    cin>>numero;
    
    for(int p=0; p <= numero; p+=2){
	cout << p << " ";
}
   
    return 0;
}

