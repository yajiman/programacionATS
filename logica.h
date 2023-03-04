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
void mayor3n();
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