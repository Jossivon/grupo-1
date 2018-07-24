#include <iostream>
#include "Materia.h"
#include "Profesor.h"
#include "Titular.h"
#include "Dictado.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int menu (){
	int op; 
	
	cout << "\n ---------MENU---------";
	cout << "\n 1. Profesor";
	cout << "\n 2. Materia";
	cout << "\n 3. Dictado";
	cout << "\n 4. Salir";
	cin>>op;
	
	return op;
	
}


int main(int argc, char** argv) {
	
	int opc,op,o; 
	
	Materia objM; 
	Titular objT; 
	Dictado objD; 
	
	do {
		opc= menu(); 
		switch (opc){
			case 1:
				cout << "\n 1. Titular, 2. Contratado"; 
				cin>>op; 
				if (op==1){
					cout << "\n 1. Ingresar, 2. Imprimir"; 
					cin>>o; 
					if (o==1)
					objT.ingresar();
					if (o==2)
					objT.imprimir();
				}		
			break;
			
			case 2:
				cout << "\n 1. Ingresar, 2. Imprimir"; 
				cin>>o;
				if (o==1)
			 	objM.ingresar(); 
			 	if (o==2)
			 	objM.imprimir();
			break;
			
			case 3: 
				cout << "\n 1. Ingresar, 2. Imprimir"; 
				cin>>o;
				if (o==1)
				objD.ingresar();
				if (o==2)
				objD.imprimir();
			break;
		}
		
	}while (opc!=4); 
	
	
	
	
	
	
	return 0;
}
