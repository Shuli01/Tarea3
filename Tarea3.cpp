#include <iostream>
#include <string>

using namespace std;

 int main(int argc, char** argv) {
		 int CLAVE;
		 float RES, OPER1, OPER2;
		 string rep;
		 string fin="z";
 do {
		cout<<"Bienvenido."<<endl;
     	cout<<"--------------"<<endl;
     	cout<<"Que desea realizar hoy?"<<endl;
     	cout<<"-----------------------"<<endl;
	cout<<"1.- Sumar"<<endl;
	cout<<"2.- Restar"<<endl;
	cout<<"3.- Multiplicar"<<endl;
	cout<<"4.- Dividir"<<endl;
	cout<<"5.- Depositar Ingresos"<<endl;
	cout<<"6.- Retirar Dinero"<<endl;
	cout<<"-----------------------"<<endl;

	cin>>CLAVE;
	
		if (CLAVE == 1) {
		cout<<"La operacion es suma. Ingrese 2 numeros: "<<endl;
		cin>>OPER1;
		cin>>OPER2;
		cout<<"Resultado de la suma: "<<(OPER1 + OPER2)<<endl;
	}
	else if (CLAVE == 2) {
	cout<<"La operacion es resta. Ingrese 2 numeros: "<<endl;
	cin>>OPER1;
	cin>>OPER2;
	cout<<"Resultado de la resta: "<<(OPER1 - OPER2)<<endl;
    }
    else if (CLAVE == 3) {
    	cout<<"La operacion es multiplicacion. Ingrese 2 numeros: "<<endl;
    	cin>>OPER1;
    	cin>>OPER2;
    	cout<<"Resultado de la multiplicacion: "<<(OPER1 * OPER2)<<endl;
	}
	else if (CLAVE == 4) {
		cout<<"La operacion es division. Ingrese 2 numeros: "<<endl;
		cin>>OPER1;
		cin>>OPER2;
		cout<<"Resultado de la division: "<<(OPER1 / OPER2)<<endl;
	}
		else if (CLAVE == 5) {
		cout<<"Que monto desea depositar?"<<endl;
		cin>>OPER1;
		cout<<"El monto de $"<<OPER1<<" ha sido depositado exitosamente."<<endl;
	}
			else if (CLAVE == 6) {
		cout<<"Que monto desea retirar?"<<endl;
		cin>>OPER1;
		cout<<"El monto de $"<<OPER1<<" ha sido retirado exitosamente."<<endl;
	}
			else {
		cout<<"Caracter Invalido, Intente de nuevo."<<endl;
		cout<<"-----------------------------------"<<endl;
	}
    cout<<"- Para finalizar pulse 'Z'"<<endl;
    cout<<"- Para continuar pulse cualquier tecla"<<endl;
   	cout<<"-----------------------------------"<<endl;
    cin>>rep;
	} while (rep != fin);
	{ cout<<"-----------------------------------"<<endl;
	  cout<<"Software realizado por  Aywad Al Chami"<<endl;
	  cout<<"Gracias por preferirnos."<<endl;
	}
	
	return 0;
	
}

//	} while (!(rep=="z" || rep=="Z"));
