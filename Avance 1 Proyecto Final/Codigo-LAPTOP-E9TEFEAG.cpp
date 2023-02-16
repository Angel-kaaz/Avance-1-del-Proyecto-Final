#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

int main(){
	/*Declaracion de las variables*/
	char N1[100], D1[100], R1[100], G1[100], C1[100], Co1[100], Basura[100];
	float Cost;
	int Eleccion, V1;
	
	/*Menu principal de la tienda*/
	cout<<"\t ---**Menu de inicio**---"<<endl;
	cout<<"1. Alta de articulos"<<endl;
	cout<<"2. Modificacion de articulos"<<endl;
	cout<<"3. Baja de articulos"<<endl;
	cout<<"4. Lista de articulos"<<endl;
	cout<<"5. Limpiar la pantalla"<<endl;
	cout<<"6. Salir"<<endl;
	
	/*Eleccion de apartado de la tienda*/
	cin>>Eleccion;
	if(Eleccion<1||Eleccion>6)
	{
		cout<<"Ingrese una opcion valida"<<endl;
		return main();
	}
	else
	{
	switch(Eleccion)
	{
		case 1: 
			cout << "Alta del producto" << endl;
			cin.getline(Basura, 100, '\n');

			cout << "Ingrese el nombre del producto" << endl;
			cin.getline(N1, 100, '\n');
			
			cout << "Ingrese una descripcion del producto" << endl;
			cin.getline(D1, 100, '\n');

			cout << "Ingrese la resena del producto" << endl;
			cin.getline(R1, 100, '\n');

			cout << "Ingrese el genero del producto" << endl;
			cin.getline(G1, 100, '\n');

			cout << "Ingrese la clasificacion del producto" << endl; 
			cin.getline(C1, 100, '\n');

			cout << "Ingrese la consola a la que pertenece el producto" << endl;
			cin.getline(Co1, 100,'\n');

			cout << "Nombre: " << N1 << endl;
			cout << "Descripcion: " << D1 << endl;
			cout << "Resena: " << R1 << endl;
			cout << "Genero: " << G1 << endl;
			cout << "Clasificacion: " << C1 << endl;
			cout << "Consola: " << Co1 << endl;

			cout << "¿Desea agregar otro producto?" << endl;
			cout << "1.Si" << endl;
			cout << "2.No" << endl;
			cin >> V1;
			while (V1<1||V1>2)
			{
				cout<<"Ingrese una opcion valida"<<endl;
				cin >> V1;
			}
	
			switch(V1)
			{
				case 1: return main();
				break;
				case 2: cout << "Fin del alta del articulo" << endl;
				return main();
				break;
		
			}
			break;
	
	
	
	
			case 2: cout<<"Disponible en un futuro"<<endl;
			return main();
			break;
	
			case 3: cout<<"Disponible en un futuro"<<endl;
			return main();
			break;
		
			case 4: cout<<"Disponible en un futuro"<<endl;
			return main();
			break;
		
			case 5: system("cls");//Borra lo que se imprimio en la pantalla anteriormente//
			return main();
			break;
		
			case 6: exit(1); //cierra la consola//
			break;
	}
	}

}
