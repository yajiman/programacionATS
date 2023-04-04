#include <iostream>
#include <string>
#include <cmath>
#include <cstdlib>
#include <conio.h>

using namespace std;

void menu();//menu (:
void menu2();//menu con mas opciones de ejercicios

//ejercisios
void suma();
void resta();
void iva();
void interc();
void nfinal();
void mponderada(); //media ponderada de 3 notas donde una vale el 30% otra el 60% y una 10%
void formula(); //formula par probar la libreria cmath
void mayor2n();// cual es el mayor de dos numeros.


//ejercicios para el menu 2
void mayor3n();// cual es el mayor de 3 numeros
void paoimpa();//si un numero es par o inpar 
//este es un test de git.

//ejercicios para el menu 3
void menu3();

//ejercicios ciclos o bucles.

void sucuadrados();//suma los primeros 10 cuadrados.
void prometempera(); //promedio de tres temperaturas.
void rango();// detenemos el programa si los nuemros estan en le rango.
void elevador();// elevar un numero.
void factorial();// sacar el factorial.
void factorial2();// sacar el factorial del factorial.
void factorilaELE();// Escriba un programa que calcule el valor de: 2^1+2^2+2^3+...+2^n


// variables globales 
int resultado=0;
int almac=0;// variable de almacenamiento
bool bandera=false;//variable para salir del menu.
int opc;// variable para la seleccion de un ejercicio



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
        cout<<"\nopcion #8";
        cout<<"\nmas #9";
        cout<<"\nsalir #0";//si colocamos el 0 el programa se finalizara cambiando bandera de false a true
        cout<<"\ndigite un numero: ";
        cin>>opc;
        }while (opc>10|opc<0);
        
         if(opc==0){
            bandera=true; // la variable de salida cambia a true 
            }
        else{
            switch (opc)// sistema de selecion de funciones
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
                case 4:
                    interc();
                    break; 
                case 5:
                    nfinal();
                    break;
                case 6:
                    mponderada();// media ponderada
                    break;
                case 7:
                    formula();// formula para provar el uso de cmath.
                    break;
                case 8:
                    mayor2n();
                    break;
                case 9:
                    menu2();
                    break;
                default: 
                    cout<<"\nesta opcion no esta creada"<<endl; 
                    break;
                }
                
            }
        resultado=0;
    } while (bandera==false);// hasta que no cambie a true no se saldra del bucle del menu
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
    resultado=num1+num2; //formula para sumar dos variables.
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
    resultado=num1-num2;// formula para restar dos variables
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
            }//fin de la funcion para sacar el iva

/*esta es una funcion de intercambio de tal modo que dos variables puedan intercambiar sus valores
la verdad aun no tengo un uso en mente para esto pero de igual forma tiene mucho potencial*/

void interc(){
    int num1,num2;

        cout<<"\nintrodusca su primer numero: ";
        cin>>num1;
        cout<<"\ndigite el sugundo numreo: ";
        cin>>num2;

        almac=num1;
        num1=num2;
        num2=almac;
        cout<<"\nsus numero han sido intercambiados";
        cout<<"\nsu primer numero es: "<<num1<<endl;
        cout<<"\nsu segundo numero es: "<<num2<<endl;
}



//en la siguiente funcion sacaremos el promedio de 4 notas finales
void nfinal(){
float n1,n2,n3,n4,promedio=0;

        cout<<"\nIntrodusca las notas del estudiante"<<endl;
        cout<<"\nNota #1: ";
        cin>>n1;
        cout<<"\nNota #2: ";
        cin>>n2;
        cout<<"\nNota #3: ";
        cin>>n3;
        cout<<"\nNota #4: ";
        cin>>n4;
    promedio=(n1+n2+n3+n4)/4;
        cout<<"\nSu promedio es: "<<promedio<<endl;
}

/*en esta funcion sacaremos la media ponderada de 3 notas donde la primera 
tiene 30% de la nota total la segunga el 60 y la ultima el 10% una vez tenemos 
loas notas aplicaremos una formula para sacar la media*/
void mponderada(){
    float n1,n2,n3,media=0;
    float f1=0,f2=0,f3=0;

    cout<<"\nDigite la nota de cada actividad"<<endl;
    cout<<"\nNota practica :";
    cin>>n1;
    cout<<"\nNota teorica: ";
    cin>>n2;
    cout<<"\nNota participacion: ";
    cin>>n3;
    f1= (n1*30)/100;
    f2= (n2*60)/100;
    f3= (n3*10)/100;
    media=f1+f2+f3;
    cout<<"\nSu nota total es: "<<media<<endl;
}

/*formula para probar la libreria cmath sus funcions son sqrt para sacar la raiz cuadrada
*/
void formula(){
    float x,y,resultado=0;
    
    cout<<"\ndigite el valor de x: ";
    cin>>x;
    cout<<"\ndigite el valor de y: ";
    cin>>x;

    resultado= (sqrt(x))/(pow(y,2)-1);

    cout<<"\nsu resultado es: "<<resultado<<endl;
}

/*en la siguiente funcion crearemos un sistema al que le daremos dos numeros
y esta nos devolvera el mayor de estos dos*/

void mayor2n(){
    int n1,n2;

    cout<<"\ndigite un numero: ";
    cin>>n1;
    cout<<"\ndigite otro numero: ";
    cin>>n2;

    if(n1>n2){
        cout<<"\nel mayor es: "<<n1<<endl;

    }else{
        cout<<"\nel mayor es:"<<n2<<endl;

    }

}

/*la siguiente funcion reprecenta un segundo menu con el fin de no saturar el primer munu,
el limite de cada menu seran 8 ejercicios de tal manera que pueda practicar el do while y el if
else*/

void menu2(){

    do{
        do{

            cout<<"\nMenu 2"<<endl;
            cout<<"\nopcion #1";
            cout<<"\nopcion #2";
            cout<<"\nopcion #3";
            cout<<"\nopcion #4";
            cout<<"\nopcion #5";
            cout<<"\nopcion #6";
            cout<<"\nopcion #7";
            cout<<"\nopcion #8";
            cout<<"\nMas #9";
            cout<<"\nsalir #0"<<endl;
            
            cin>>opc;

        }while (opc<0|opc>10);
    if(opc==0){
        bandera=true;

    }else{
        switch (opc)
        {
        case 1:
            mayor3n();
            break;
        case 2:
            paoimpa();
            break;
	case 9:
	     menu3();
		break;
        default:
            break;
        }

    }

}while(bandera==true);

bandera=false;
}

/*en la siguiente funciuon tratamos de conseguir saber cual es el mayor de 3 numeros*/

void mayor3n (){
    int n1,n2,n3;
            cout<<"Digite tres numeros"<<endl;
            cout<<"\ndigite su primer numero"<<endl;
            cin>>n1;
            cout<<"\ndigite su segundo numero"<<endl;
            cin>>n2;
            cout<<"\ndigite su tercer numero"<<endl;
            cin>>n3;

    if(n1!=n2||n2!=n3){
        if(n1>n2){
            if(n1>n3){
                cout<<"el mayor es: "<<n1<<endl;
            }else{
                 cout<<"el mayor es: "<<n3<<endl;
                }

        }else{
            if(n2>n3){
                cout<<"el mayor es: "<<n2<<endl;
            }else{
                cout<<"el mayor es: "<<n3<<endl;
            }

    }
    }else{

        cout<<"\nLos numeros son iguales"<<endl;
        }
}

/*como saber si un numero es para o in par, en la siguinte funcion dividiremos un numero
hasta saber si es par o impar*/

void paoimpa(){
    int n1;

    cout<<"\ndigite un numero: ";
    cin>>n1;

    do
    {
        almac=n1/2;
    } while ((n1==0)||(n1==1));
    
    if (n1==0)
    {
        cout<<"\nsu numero es par"<<endl;
    }else{
        cout<<"\nsu numero es in par"<<endl;
    }
}

void menu3(){
	
	do{
		do{
			cout<<"------menu  #3------"<<endl;
			cout<<"  ejercicio #1 "<<endl;
			cout<<"  ejercicio #2 "<<endl;
			cout<<"  ejercicio #3 "<<endl;
			cout<<"  ejercicio #4 "<<endl;
			cout<<"  ejercicio #5 "<<endl;
			cout<<"  ejercicio #6 "<<endl;
			cout<<"  ejercicio #7 "<<endl;
			cout<<"precione 0 para salir del programa"<<endl;
			cin>>opc;
		}while((opc<=0)&&(opc>=9));
		
		if(opc==0){
			bandera=true;
		}else{
			switch(opc){
				case 1:
					sucuadrados();
					break;
				case 2:
					prometempera();
					break;
				case 3:
					rango();
					break;
				case 4:
					elevador();
					break;
				case 5:
					factorial();
					break;
				case 6:
					factorial2();
					break;
				case 7:
					factorilaELE();
					break;
				default:
					cout<<"\nusted ha ingresado una opcion incorrecta"<<endl;
					cout<<"\nprecione enter";
					cin.get();
					break;
			}
		}
			
	}while(bandera==false);
	
}


/*en el siguinte ejercicion sacaremos la suma de los primeros 10 
cuadrados utilizando bucles*/


void sucuadrados(){
	int n1,resultado=0;
	
	for(int i=1;i<=10;i++){
		n1=i*i;
		cout<<n1<<endl;
		resultado+=n1;
	}
	cout<<"\nla suma de los 10 primeros cuadrados es: "<<resultado<<endl;
	cin.get();
}

/*el siguiente programa sacara el promedio de 4 
temperaturas sacadas cada 4 horas*/

void prometempera(){
	float n1,resultado=0;
	for(int i=0;i<3;i++){
		cout<<"cual es su temperatura #"<<i<<": ";
		cin>>n1;
	}
	resultado=n1/3;
	cout<<"\nsu temperatura promedio es: "<<resultado<<endl;
}

/*en la siguinte funcion sumamos todos los numeros dados hasta que se coloque
un numero entre 20-30 o que se brinde el 0*/

void rango(){
	int n1=0,n2=0;
	
	do{
		cout<<"\ndigite un numero: ";
		cin>>n1;
		n2+=n1;
	}while((n1<20 || n1>30)&&(n1!=0));
	
	cout<<"\nla suma de todos los numeros digitados es: "<<n2<<endl;
	
}

/*escribire un programa que calcule x^y, 
donde tanto x como y son enteros positivos, 
sin utilizar la función pow.*/

void elevador(){
	int n1,n2,resultado=1;
	
	cout<<"\ndigite un numero: ";
	cin>>n1;
	cout<<"\nEleva ese numero: ";
	cin>>n2;
	for(int i=1; i<n2;i++){
		resultado*=n1;
		cout<<"\n"<<resultado;
	}
	
	cout<<"\nSu resultado es: "<<resultado<<endl;
}


void factorial(){
	int n,resultado=1;
	cout<<"\nDigite su numero para sacar su factorial: ";
	cin>>n;
	
	for(int i=1;i<=n;i++){
		resultado*=i;
	}
	
	cout<<"\nSu resultado es: "<<resultado<<endl;
}

void factorial2(){
	int n,resultado=1;
	cout<<"\nDigite su numero para sacar su factorial!: ";
	cin>>n;
	
	for(int i=1;i<=n;i++){
		resultado*=i;
			for(int e=1;e<=i;e++){
				resultado*=e;
			}
	}

	cout<<"\nSu resultado es: "<<resultado<<endl;
}


void factorilaELE(){
	int n,suma=0,resultado=0;
	
	cout<<"\nDigite su factrial para elevarlo: ";
	cin>>n;
	
	for(int i=1;i<=n;i++){
		resultado= pow(2,i);
		suma+=resultado;
	}
	
	cout<<"\nsu resultado es: "<<resultado<<endl;
}
