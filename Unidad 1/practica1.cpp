//Incluir la libreria 
#include <iostream>
/* utilizar todos loscaracteresy funciones
de la libreria 
*/
using namespace std;
// funcion principal 
int main(){
	
	// declarar variables 
	int a,b,c,d,e,promedio;
	// imprimir mensaje
	cout<<"Bienvenido a esta rutina en la cual calculara tu promedio"<<endl;
	//pedir las calificaciones
	cout<<"Digita tu primera calificacion"<<endl;
	cin>>a;
    cout<<"Digita tu segunda calificacion"<<endl;
	cin>>b;
	cout<<"Digita tu tercera calificacion"<<endl;
	cin>>c;
	cout<<"Digita tu cuarta calificacion"<<endl;
	cin>>d;
	cout<<"Digita tu quinta calificacion"<<endl;
	cin>>e;	 
    //calcular promedio
	promedio=(a+b+c+d+e)/5;
	cout<<"Tu promedio general es de:"<<promedio<<endl;
    if(promedio>=7){
 	   cout<<"Felicidades tu calificaciones aprobatoria";
 }
   else{
    cout<<"lo lamento tu calificacion no es aprobatoria";
 }
  
cout<<"GRACIAS POR USAR ESTA APLICACION";
 return 0; 
 
 }
