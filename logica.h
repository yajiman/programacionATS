#include <iostream>
#include <string>
#include <cmath>
#include <cstdlib>
#include <conio.h>

using namespace std;


void menu();//menu (:

//ejercisios
void suma();
void resta();
void iva();
// variables globales 
int resultado=0;
bool bandera=false;//variable para salir del menu.
int opc;



void menu(){

    do{

        do{
        cout<<"\t\nselecione un ejercicio\n";
        cout<<"\nopcion #1";// si precionamos 1 iniciamos la funcion suma 
        cout<<"\nopcion #2";// si pricinamos 2 iniciamos la funcion resta
        cout<<"\nopcion #3";
        cout<<"\nopcion #4";
        cout<<"\nopcion #5";
        cout<<"\nopcion #6";
        cout<<"\nopcion #7";
        cout<<"\nsalir #0";//si colocamos el 0 el programa se finalizara cambiando bandera de false a true
        cout<<"\ndigite un numero: ";
        cin>>opc;
        }while (opc>7|opc<0);
        
            
        
        


        if(opc==0){
            bandera=true; // la variable de salida cambia a true 
            }
        else{
            switch (opc)
                {
                case 1:
                    suma();
                    break;
                case 2:
                    resta();
                    break;
                case 3:
                    iva();
                    break;
                }
                
        
            }
        resultado=0;
    } while (bandera==false);
}

/*en la siguiente funcion declaro dos variables locales, posteriormente pido
que se introduscan dos numero enteros para su posterio suma espresada mediante
la variable gobal resultado */
void suma(){
int num1, num2;
    cout<<"hola mundo"<<endl;
    cout<<"\ndigite un numero: ";
	cin>>num1;
    cout<<"\ndigite otro numero: ";
	cin>>num2;
    resultado=num1+num2;
	cout<<"\nla suma es: "<<resultado<<endl;
 
}


/*en la siguiente funcion declaro dos variables locales, posteriormente pido
que se introduscan dos numero enteros para su posterio resta espresada mediante
la variable gobal resultado */
void resta(){
    int num1, num2;
    cout<<"\nhola digite dos numeros para restarlos";
    cout<<"\ndigite un numero: ";
	cin>>num1;
    cout<<"\ndigite otro numero: ";
	cin>>num2;
    resultado=num1-num2;
	cout<<"\nla resta es: "<<resultado<<endl;
}


/*en la siguiente funcion sacamos el iva dado por el usuario a un precion dado por el usuario*/
void iva(){
    float ivat,num1,num2;
        cout<<"\n\tsacar iva";
        cout<<"\ncual es su cantidad de impuestos: ";
        cin>>ivat;
        cout<<"\ncual es el valor de su producto: ";
        cin>>num1; 
        resultado=(ivat*num1)/100; //formula para sacar el porcentaje
        resultado=resultado+num1;
        cout<<"\nla suma de su iva es: "<<resultado<<endl;
            }
