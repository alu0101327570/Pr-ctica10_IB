#include <iostream>
#include <fstream>
#include <string>
#include "funciones_cripto.h"

using namespace std;

// ./cripto fichero_de_entrada fichero_de_salida método contraseña operación

int main (int argc,char* argv[]){   
  usage(argc, argv);

  ofstream entrada_descifrada;
  entrada_descifrada.open("fichero_de_entrada_de_codigo_descifrado.txt");

  ofstream salida;
  salida.open("fichero_de_salida.txt");

  ofstream salida_descifrada;
  salida_descifrada.open("fichero_de_codigo_descifrado.txt");
  int metodo = stoi(argv[3]);
  string operacion;
  operacion=argv[5];
  int contrasena=stoi(argv[4]);

  if (metodo==1){
    metodo_xor(operacion);
    }
    else{metodo_cesar(contrasena,operacion);
    }
}

