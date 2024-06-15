#include <string>
#include <iostream>
#include <limits>

using namespace std;

int main(){
	int contadorA=0, contadorB=0, contadorC=0; // Contadores
	int contadorTotalA=0,contadorTotalB=0,contadorTotalC=0;
	float credito=0, creditoN=0;
	
		cout<<"--Sistema DINO --\n"; // TITULO
	while(true){
		int tipoDesecho,cantidadDesecho;
		// ENTRADAS Y MUESTREO DE DATOS A PEDIR
		while (true) { 
            cout<<"Ingrese el tipo de desecho (1-papel 2-vidrio 3-plastico): ";
			cin>>tipoDesecho;
            if (tipoDesecho >= 1 && tipoDesecho <= 3) break; //CICLO IF PARA ASEGURAR QUE NO INGRESE UN NUMERO O CARACTER DE MAS 
            else cout << "Desecho invalido, por favor ingrese 1, 2 o 3." << endl;
        }
        
			
		

            cout << "Ingrese la cantidad de residuos: ";
            cin >> cantidadDesecho;
            
		
			if(tipoDesecho==1){
				contadorA++;
				contadorTotalA += cantidadDesecho;
		}else if(tipoDesecho==2) {
			contadorB++;
			contadorTotalB += cantidadDesecho;
		}else if(tipoDesecho==3){
			contadorC++;
			contadorTotalC += cantidadDesecho;
		}
		
		
		 // Preguntar si desea continuar
        char continuar;
        	cout << "\n¿Desea ingresar otro ingreso de residuos? (s/n): ";
        	cin >> continuar;
        		if (continuar != 's' && continuar != 'S') {
        		break;
		}    
			
	}
	//MUESTREO DE CONTRADORES 
	cout<<"Camiones reciclaje de papel= "<<contadorA<<"\n";
	cout<<"Total de papel: "<<contadorTotalA<<"\n";
	cout<<"Camiones reciclaje de vidrio = "<<contadorB<<"\n";
	cout<<"Total de vidrio: "<<contadorTotalB<<"\n";
	cout<<"Camiones reciclaje de plastico = "<<contadorC<<"\n";
	cout<<"Total de plastico: "<<contadorTotalC<<"\n";
	
	//
	credito = contadorTotalA + contadorTotalB + contadorTotalC;
	creditoN = credito / 80;
	
	cout<<"Credito proporcionado a su cuenta: "<<creditoN;
	
	
	return 0;
}
