#include <iostream>
#include <cstdlib>
#include <fstream>
#include "funciones_cripto.h"

using namespace std;

void usage( int argc, char* argv []) {

  if (argc!= 2 && argc!= 6  ) {
     cout << argv [ 0 ] << " : Falta un número natural como parámetro " << endl;
     cout << " Aprender " << argv [ 0 ] << " --help para más información " << endl;
    exit(EXIT_SUCCESS);
  }
  string parametro {argv [ 1 ]};

  if (parametro == "--help" ) {
    cout << kHelpText << endl;
    exit(EXIT_SUCCESS);
  }
}

void metodo_letraor(string operacion){
    cout << "metodo_letraor" << endl;

 }
void metodo_cesar(int contrasena, string operacion){
    int k = contrasena;
    string linea;
    fstream entrada ("fichero_de_entrada.txt"); //fstream permite abrir entrada y salida de los ficheros
    fstream salida ("ficheros_de_salida.txt");
    fstream salida_descifrada ("ficheros_de_codigo_descifrado.txt");

    if(operacion == "+"){
        while( getline (entrada, linea))
        {
            int longitud_linea = linea.size();
            for(int i = 0; i < longitud_linea; ++i){
                char letra = linea.at(i);
                int letra_numero = letra+k;
                char codigo_cifrado = letra_numero;
                salida << codigo_cifrado;
            }
            salida << endl;
        }
    }

    if(operacion == "-"){
        while( getline (salida, linea))
        {
            int longitud_linea = linea.size();
            for(int i = 0; i < longitud_linea; ++i){
                char letra = linea.at(i);
                int letra_numero = letra-k;
                char codigo_cifrado = letra_numero;
                salida_descifrada << codigo_cifrado;
            }
            salida_descifrada << endl;
        }
    }
}