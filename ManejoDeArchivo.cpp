//
// Created by kathe on 11/03/2023.
//
#include <iostream>
#include <fstream>

using namespace std;
int num, resultado, dia, opc = 1;
string texto;

void ejercicio1(){
    cout << "Bienvenido, Ingrese el numero de la tabla de multiplicar que desee obtener" << endl;
    cin >> num;
    for (int i = 0; i <= 10; ++i) {
        resultado = num * i;
        cout << num << " * " << i << " = " << resultado << endl;
    }
}

void ejercicio2(){
    while (opc == 1) {
        cout << "\n Tabla de multiplicar del 3" << endl;
        for (int i = 0; i <= 10; ++i) {
            resultado = 3 * i;
            cout << "3 * " << i << " = " << resultado << endl;
        }

        cout << "\n Tabla de multiplicar del 7" << endl;
        for (int i = 0; i <= 10; ++i) {
            resultado = 7 * i;
            cout << "7 * " << i << " = " << resultado << endl;
        }

        cout << "\n Tabla de multiplicar del 9" << endl;
        for (int i = 0; i <= 10; ++i) {
            resultado = 9 * i;
            cout << "9 * " << i << " = " << resultado << endl;
        }

        opc = 0;
    }
}

void ejercicio3(){
    cout << "Bienvenido, Ingrese un numero del 1 al 7 que representara un dia de la semana" << endl;
    cin >> dia;
    switch (dia) {
        case 1:
            cout << "El numero ingresado representa a LUNES y SI es un dia laboral" << endl;
            break;
        case 2:
            cout << "El numero ingresado representa a MARTES y SI es un dia laboral" << endl;
            break;
        case 3:
            cout << "El numero ingresado representa a MIERCOLES y SI es un dia laboral" << endl;
            break;
        case 4:
            cout << "El numero ingresado representa a JUEVES y SI es un dia laboral" << endl;
            break;
        case 5:
            cout << "El numero ingresado representa a VIERNES y SI es un dia laboral" << endl;
            break;
        case 6:
            cout << "El numero ingresado representa a SABADO y NO es un dia laboral" << endl;
            break;
        case 7:
            cout << "El numero ingresado representa a DOMINGO y NO es un dia laboral" << endl;
            break;
        default:
            cout << "El numero ingresado no representa ningun dia de la semana" << endl;
            break;
    }
}

void leerArchivo(){
    ifstream archivo;

    archivo.open("C:/parcial.txt");
    cout << "Abriendo archivo" << endl;
    if(archivo.is_open()){
        while (getline(archivo, texto)){
            cout << "Archibo leido --> " <<texto << endl;
        }
        archivo.close();
    }else{
        cout << "archivo no encontrado";
    }
}

void modificarArchivo(){
    ofstream archivo;
    archivo.open("C:/parcial.txt", ios::app);
    if (archivo.is_open()){
        archivo << "\n" << "0909 - 22 - 1883" <<endl;
        archivo.close();
        cout << "Archivo modificado" << endl;
    }
    else{
        cout << "Error al leer el archivo" << endl;
    }
}