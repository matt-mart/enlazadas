
//------------------------------------------------------------//

#include <iostream>

//------------------------------------------------------------//

using uint = unsigned int;

//------------------------------------------------------------//

#include "./pila.hpp"
#include "./pila/nodo.hpp"
#include "./pila/largo.hpp"
#include "./pila/vacia.hpp"
#include "./pila/borrar.hpp"
#include "./pila/crear.hpp"
#include "./pila/agregar.hpp"
#include "./pila/extraer.hpp"
#include "./pila/mostrar.hpp"

//------------------------------------------------------------//

int main (){

          PILA pila;

          PILA_Mostrar( pila );

          PILA_Agregar( &pila, 5 );
          PILA_Mostrar(  pila );
  int a = PILA_Extraer( &pila );
          PILA_Mostrar(  pila );

  std::cout << "\n" << a << "\n";

}

//------------------------------------------------------------//
