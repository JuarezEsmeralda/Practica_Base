#define dias 





#include <iostream>
#include <string>

using namespace std;
usuarios const int MAX_USERS = 10; 
const string USERS[] = {"luis", "ricardo", "raul"}; 
const string PASSWORDS[] = {"12345", "hola2", "ingresar"}; 

bool isValidUser(const string & username, const string & password) {
    for (int i = 0; i < MAX_USERS; i++) {
        if (USERS[i] == username && PASSWORDS[i] == password) {
            return true;
        }
    }
    return false;
}
int main(){
}
    string username, password;
    cout <<"BIENVENIDO AL SISTEMA"<<endl;
    cout << "Ingrese su nombre de usuario: ";
    cin >> username;
    cout << "Ingrese su contraseña: ";
    cin >> password;
    if (isValidUser(username, password)) {
    cout << "Inicio de sesión exitoso. ¡Bienvenido, " << username << "!" << endl;
	}
switch(opcion){
	case 1:
	int a;
	for(a=0;a<=100;a++){
		cout<<a<<endl;
	}
	return 0;
	cin.get();

	case 2:
		int main(){
	int a;
	
	for(a=100;a>=0;a--){
		cout<<a<<endl;
	}
	return 0;
	cin.get();	

	case 3:
        int a;
    for(a=2;a<=100;a+=2){
	cout<<a<<endl;
    }
    return 0,
    cin.get();
  
    case 4:
	int a,b,c,d,e,promedio;
	
	cout<<"Bienvenido a esta rutina en la cual calculara tu promedio"<<endl;
	
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
	promedio=(a+b+c+d+e)/5;
	cout<<"Tu promedio general es de:"<<promedio<<endl;
    if(promedio>=7){
 	   cout<<"Felicidades tu calificaciones aprobatoria";
 }
   else{
    cout<<"lo lamento tu calificacion no es aprobatoria";
 }

	
	
}











	else{
    cout << "Credenciales incorrectas. Inicio de sesión fallido." << endl;
	}

   return 0;
}



    int main(){ 
	int opcion,num1,num2, num3, num4, num5, num6, num7, num8, num9, num10, num11, num12;
	
	cout<<"Ingresa un numero del 1 al 12"<<endl;
	cin>>opcion;
	
	switch(opcion){
	
	case1: 
	cout<<"Programa1"<<endl;
	cin>>num1;
     
	break;	
		
	case2: 
	cout<<"Programa2"<<endl;
	cin>>num2;
	break;		
    
	case3: 
	cout<<"Programa3"<<endl;
	cin>>num3;
	break;
		
		
	case4: 
	cout<<"Programa4"<<endl;
	cin>>num4;
	break;
			
	case5: 
	cout<<"Programa5"<<endl;
	cin>>num5;
	break;
		
	case6: 
	cout<<"Programa6"<<endl;
	cin>>num6;
	break;	
		
	case7: 
	cout<<"Programa7"<<endl;
	cin>>num7
	break; 
	
	case8: 
	cout<<"Programa8"<<endl;
	cin>>num8;
	break;
	
	case9: 
	cout<<"Programa9"<<endl;
	cin>>num9;
	break;
	
	case10: 
	cout<<"Programa10"<<endl;
	cin>>num10;
	break;
	
	case11: 
	cout<<"Programa11"<<endl;
	cin>>num11;
	break;
	
	case12: 
	cout<<"Programa12"<<endl;
	cin>>num12;
	break;
	
	default:
	
	cout<<"Tu numero es invalido"<<endl;
	break;
			
	}
	
	
	return 0;
}
